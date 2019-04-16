#!/usr/bin/perl -w

use strict;
use File::Basename;

die "usage: $0 po/*.po\n" unless @ARGV;

my @locales;
my $func_prefix = "hebcal_lookup_";

foreach my $pofile (@ARGV) {
    my $locale = basename($pofile, ".po");
    my $outfile = "strings_$locale.gperf";

    print STDERR "$pofile => $outfile\n";
    open(IN, $pofile) || die "$pofile: $!";
    open(OUT, ">$outfile") || die "$outfile: $!";
    binmode(IN, ":utf8");
    binmode(OUT, ":utf8");

    print OUT '%delimiters=|', "\n";
    print OUT '%define lookup-function-name ', $func_prefix, $locale, "\n";
    print OUT '%struct-type
%{
#include <string.h>
%}
struct event_title { char *name; char *dest; };
%%
';

    my $msgid;
    while(<IN>) {
        if (/^msgid\s+"(.*)"\s*$/) {
            $msgid = $1;
        } elsif (/^msgstr\s+"(.+)"\s*$/) {
            my $msgstr = $1;
            print OUT qq{$msgid|"$msgstr"\n};
        }
    }
    close(IN);
    close(OUT);

    my $dest = "strings_$locale.c";
    my $cmd = "gperf $outfile > $dest";
    print STDERR "$cmd\n";
    system($cmd);
    push(@locales, $locale);
}

my $locale_list = join(", ", @locales);
my $locale_list_len = scalar(@locales) + 1;

my $outfile = "translations.h";
print STDERR "$outfile\n";
open(OUT, ">$outfile") || die "$outfile: $!";
print OUT <<EOF;
/*
 * DO NOT EDIT THIS FILE!
 * Generated by $0
 */
#ifndef __HEBCAL_TRANSLATIONS__
#define __HEBCAL_TRANSLATIONS__

#define HEBCAL_LANG_LIST "$locale_list"

const char *hebcal_langs[$locale_list_len];

struct event_title { char *name; char *dest; };

const char * lookup_translation(const char *s);

typedef enum hebcal_lang_e {
    HEBCAL_LANG_DEFAULT,
EOF
;

foreach my $locale (@locales) {
    print OUT "    HEBCAL_LANG_", uc($locale), ",\n";
}

print OUT <<EOF;
    HEBCAL_LANG_UNDEFINED
} hebcal_lang;

void hebcal_set_language(hebcal_lang lang);

hebcal_lang hebcal_get_language(const char *locale);

#endif /* __HEBCAL_TRANSLATIONS__ */
EOF
;
close(OUT);

$outfile = "translations.c";
print STDERR "$outfile\n";
open(OUT, ">$outfile") || die "$outfile: $!";
print OUT <<EOF;
/*
 * DO NOT EDIT THIS FILE!
 * Generated by $0
 */
#include "translations.h"
#include <string.h>

const char *hebcal_langs[] = {
EOF
;

foreach my $locale (@locales) {
    print OUT "   \"", $locale, "\",\n";
}

print OUT "   NULL\n};\n\n";

foreach my $locale (@locales) {
    print OUT "struct event_title * ", $func_prefix, $locale, "(const char *str, unsigned int len);\n";
}

print OUT <<EOF;

hebcal_lang g_lang = HEBCAL_LANG_DEFAULT;

void hebcal_set_language(hebcal_lang lang) {
    g_lang = lang;
}

hebcal_lang hebcal_get_language(const char *locale) {
    if (!locale || !locale[0]) {
        return HEBCAL_LANG_DEFAULT;
EOF
;
foreach my $locale (@locales) {
    print OUT "    } else if (0 == strcmp(locale, \"", $locale, "\")) {\n";
    print OUT "        return HEBCAL_LANG_", uc($locale), ";\n";
}

print OUT <<EOF;
    } else {
        return HEBCAL_LANG_UNDEFINED;
    }
}

const char * lookup_translation(const char *src) {
    struct event_title *et;
    if (!src || !src[0]) {
        return src;
    }
    switch (g_lang) {
        case HEBCAL_LANG_DEFAULT:
            return src;
EOF
;

foreach my $locale (@locales) {
    print OUT "        case HEBCAL_LANG_", uc($locale), ":\n";
    print OUT "            et = ", $func_prefix, $locale, "(src, strlen(src));\n";
    print OUT "            break;\n";
}

print OUT <<EOF;
        case HEBCAL_LANG_UNDEFINED:
        default:
            return src;
    }
    if (et && et->dest && et->dest[0]) {
        return et->dest;
    }
    return src;
}
EOF
;

close(OUT);
exit(0);
