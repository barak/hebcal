/* C code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf strings_ashkenazi.gperf  */
/* Computed positions: -k'1,3,5,8-9' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 4 "strings_ashkenazi.gperf"

#include <string.h>
#line 7 "strings_ashkenazi.gperf"
struct event_title { char *name; char *dest; };

#define TOTAL_KEYWORDS 54
#define MIN_WORD_LENGTH 5
#define MAX_WORD_LENGTH 25
#define MIN_HASH_VALUE 6
#define MAX_HASH_VALUE 85
/* maximum key range = 80, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86,  5,  0, 86, 86, 86, 86, 86, 10,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86,  0,  0, 10,  5, 10,
       0, 86, 30,  0,  0,  0,  5,  0, 86, 40,
      10, 35, 86,  0,  5,  0, 25, 50, 86,  0,
      86,  0, 86, 86, 86, 86, 86,  0,  0,  0,
      10, 30,  5, 86, 40, 35,  0,  0,  0,  5,
      15,  0,  5, 86,  5,  5, 20,  0, 40,  0,
      86, 30,  5, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[8]+1];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

struct event_title *
hebcal_lookup_ashkenazi (str, len)
     register const char *str;
     register unsigned int len;
{
  static struct event_title wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""},
#line 15 "strings_ashkenazi.gperf"
      {"Makkot","Makkos"},
#line 10 "strings_ashkenazi.gperf"
      {"Shabbat","Shabbos"},
#line 48 "strings_ashkenazi.gperf"
      {"Sukkot I","Sukkos I"},
#line 49 "strings_ashkenazi.gperf"
      {"Sukkot II","Sukkos II"},
      {""},
#line 58 "strings_ashkenazi.gperf"
      {"Toldot","Toldos"},
#line 29 "strings_ashkenazi.gperf"
      {"Ki Tavo","Ki Savo"},
      {""},
#line 43 "strings_ashkenazi.gperf"
      {"Shavuot I","Shavuos I"},
#line 44 "strings_ashkenazi.gperf"
      {"Shavuot II","Shavuos II"},
#line 26 "strings_ashkenazi.gperf"
      {"Chukat","Chukas"},
#line 50 "strings_ashkenazi.gperf"
      {"Sukkot II (CH''M)","Sukkos II (CH''M)"},
#line 51 "strings_ashkenazi.gperf"
      {"Sukkot III (CH''M)","Sukkos III (CH''M)"},
#line 42 "strings_ashkenazi.gperf"
      {"Shabbat Zachor","Shabbos Zachor"},
#line 37 "strings_ashkenazi.gperf"
      {"Shabbat HaGadol","Shabbos HaGadol"},
      {""},
#line 36 "strings_ashkenazi.gperf"
      {"Shabbat HaChodesh","Shabbos HaChodesh"},
#line 41 "strings_ashkenazi.gperf"
      {"Shabbat Shuva","Shabbos Shuvah"},
#line 35 "strings_ashkenazi.gperf"
      {"Shabbat Chazon","Shabbos Chazon"},
#line 60 "strings_ashkenazi.gperf"
      {"Yitro","Yisro"},
#line 40 "strings_ashkenazi.gperf"
      {"Shabbat Shekalim","Shabbos Shekalim"},
#line 13 "strings_ashkenazi.gperf"
      {"Ketubot","Kesubos"},
#line 19 "strings_ashkenazi.gperf"
      {"Bechorot","Bechoros"},
      {""},
#line 23 "strings_ashkenazi.gperf"
      {"Bechukotai","Bechukosai"},
#line 33 "strings_ashkenazi.gperf"
      {"Purim Katan","Purim Koton"},
#line 20 "strings_ashkenazi.gperf"
      {"Keritot","Kerisos"},
#line 9 "strings_ashkenazi.gperf"
      {"Berachot","Berachos"},
#line 46 "strings_ashkenazi.gperf"
      {"Shmini Atzeret","Shmini Atzeres"},
#line 21 "strings_ashkenazi.gperf"
      {"Midot","Midos"},
#line 45 "strings_ashkenazi.gperf"
      {"Shemot","Shemos"},
#line 16 "strings_ashkenazi.gperf"
      {"Shevuot","Shevuos"},
#line 25 "strings_ashkenazi.gperf"
      {"Bereshit","Bereshis"},
      {""},
#line 14 "strings_ashkenazi.gperf"
      {"Baba Batra","Baba Basra"},
#line 53 "strings_ashkenazi.gperf"
      {"Sukkot V (CH''M)","Sukkos V (CH''M)"},
#line 54 "strings_ashkenazi.gperf"
      {"Sukkot VI (CH''M)","Sukkos VI (CH''M)"},
#line 18 "strings_ashkenazi.gperf"
      {"Menachot","Menachos"},
      {""},
#line 32 "strings_ashkenazi.gperf"
      {"Matot","Matos"},
#line 11 "strings_ashkenazi.gperf"
      {"Taanit","Taanis"},
#line 31 "strings_ashkenazi.gperf"
      {"Ki Tisa","Ki Sisa"},
#line 61 "strings_ashkenazi.gperf"
      {"Parashat","Parshas"},
#line 57 "strings_ashkenazi.gperf"
      {"Ta'anit Esther","Ta'anis Esther"},
#line 55 "strings_ashkenazi.gperf"
      {"Sukkot VII (Hoshana Raba)","Sukkos VII (Hoshana Raba)"},
#line 34 "strings_ashkenazi.gperf"
      {"Tazria","Sazria"},
#line 12 "strings_ashkenazi.gperf"
      {"Yevamot","Yevamos"},
#line 39 "strings_ashkenazi.gperf"
      {"Shabbat Parah","Shabbos Parah"},
      {""},
#line 30 "strings_ashkenazi.gperf"
      {"Ki Teitzei","Ki Seitzei"},
#line 28 "strings_ashkenazi.gperf"
      {"Erev Sukkot","Erev Sukkos"},
#line 27 "strings_ashkenazi.gperf"
      {"Erev Shavuot","Erev Shavuos"},
#line 62 "strings_ashkenazi.gperf"
      {"Leil Selichot","Leil Selichos"},
      {""},
#line 38 "strings_ashkenazi.gperf"
      {"Shabbat Nachamu","Shabbos Nachamu"},
#line 56 "strings_ashkenazi.gperf"
      {"Ta'anit Bechorot","Ta'anis Bechoros"},
#line 24 "strings_ashkenazi.gperf"
      {"Beha'alotcha","Beha'aloscha"},
#line 47 "strings_ashkenazi.gperf"
      {"Simchat Torah","Simchas Torah"},
      {""}, {""}, {""},
#line 52 "strings_ashkenazi.gperf"
      {"Sukkot IV (CH''M)","Sukkos IV (CH''M)"},
      {""}, {""}, {""}, {""},
#line 17 "strings_ashkenazi.gperf"
      {"Horayot","Horayos"},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 59 "strings_ashkenazi.gperf"
      {"Vaetchanan","Vaeschanan"},
      {""}, {""}, {""}, {""},
#line 22 "strings_ashkenazi.gperf"
      {"Achrei Mot","Achrei Mos"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
