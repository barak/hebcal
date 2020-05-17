/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf strings_ashkenazi_poylish.gperf  */
/* Computed positions: -k'1,3,5,8-9,11' */

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
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 4 "strings_ashkenazi_poylish.gperf"

#include <string.h>
#line 7 "strings_ashkenazi_poylish.gperf"
struct event_title { char *name; char *dest; };

#define TOTAL_KEYWORDS 191
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 25
#define MIN_HASH_VALUE 4
#define MAX_HASH_VALUE 460
/* maximum key range = 457, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static unsigned short asso_values[] =
    {
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461,   0,  20, 461, 461, 461,   0, 461, 110,
        0, 461, 461, 461, 461, 461,   5, 461, 461,   0,
       45,  40,  35,  20,  15,  10,   0, 461, 461,   0,
      461, 461, 461, 461, 461,  75,  55,  90, 135,  15,
        5, 110,  45,   0,   0,  80,   5,  40, 140,  10,
        5,  35,  70,   0,   0,   5,  10, 165, 461, 125,
       10,   0, 461, 461, 461, 461, 461,  30,  10,  15,
        0,  35,  65,   0,  80,   5,  80,   0,  75,  55,
       65, 100,   0,   5,   0,   0,  20,   5,   0,  60,
      461,  85, 110, 125, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
      case 9:
        hval += asso_values[(unsigned char)str[8]+1];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]+1];
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
hebcal_lookup_ashkenazi_poylish (register const char *str, register size_t len)
{
  static struct event_title wordlist[] =
    {
      {""}, {""}, {""}, {""},
#line 175 "strings_ashkenazi_poylish.gperf"
      {"Sigd","Sigd"},
      {""},
#line 177 "strings_ashkenazi_poylish.gperf"
      {"Sukkot","Sukkos"},
#line 189 "strings_ashkenazi_poylish.gperf"
      {"Tu B'Av","Tu B'ov"},
#line 178 "strings_ashkenazi_poylish.gperf"
      {"Sukkot I","Sukkos I"},
#line 179 "strings_ashkenazi_poylish.gperf"
      {"Sukkot II","Sukkos II"},
#line 156 "strings_ashkenazi_poylish.gperf"
      {"Tevet","Teyves"},
#line 129 "strings_ashkenazi_poylish.gperf"
      {"Pesach","Peisach"},
      {""},
#line 130 "strings_ashkenazi_poylish.gperf"
      {"Pesach I","Peisach I"},
#line 131 "strings_ashkenazi_poylish.gperf"
      {"Pesach II","Peisach II"},
      {""},
#line 15 "strings_ashkenazi_poylish.gperf"
      {"Sukkah","Sikku"},
#line 180 "strings_ashkenazi_poylish.gperf"
      {"Sukkot II (CH''M)","Sukkos II (CH''M)"},
#line 181 "strings_ashkenazi_poylish.gperf"
      {"Sukkot III (CH''M)","Sukkos III (CH''M)"},
      {""},
#line 191 "strings_ashkenazi_poylish.gperf"
      {"Tu B'Shvat","Tu BiShvat"},
      {""},
#line 132 "strings_ashkenazi_poylish.gperf"
      {"Pesach II (CH''M)","Peisach II (CH''M)"},
#line 133 "strings_ashkenazi_poylish.gperf"
      {"Pesach III (CH''M)","Peisach III (CH''M)"},
#line 149 "strings_ashkenazi_poylish.gperf"
      {"Elul","Elul"},
#line 138 "strings_ashkenazi_poylish.gperf"
      {"Pesach VII","Peisach VII"},
#line 139 "strings_ashkenazi_poylish.gperf"
      {"Pesach VIII","Peisach VIII"},
#line 184 "strings_ashkenazi_poylish.gperf"
      {"Sukkot VI (CH''M)","Sukkos VI (CH''M)"},
      {""}, {""},
#line 25 "strings_ashkenazi_poylish.gperf"
      {"Sotah","Soytu"},
      {""},
#line 137 "strings_ashkenazi_poylish.gperf"
      {"Pesach VI (CH''M)","Peisach VI (CH''M)"},
      {""},
#line 91 "strings_ashkenazi_poylish.gperf"
      {"Tzav","Tzav"},
#line 185 "strings_ashkenazi_poylish.gperf"
      {"Sukkot VII (Hoshana Raba)","Sukkos VII (Hoyshano Rabo)"},
      {""},
#line 170 "strings_ashkenazi_poylish.gperf"
      {"Shavuot","Shvuos"},
      {""},
#line 171 "strings_ashkenazi_poylish.gperf"
      {"Shavuot I","Shvuos I"},
#line 172 "strings_ashkenazi_poylish.gperf"
      {"Shavuot II","Shvuos II"},
#line 84 "strings_ashkenazi_poylish.gperf"
      {"Shemot","Shmoys"},
#line 33 "strings_ashkenazi_poylish.gperf"
      {"Shevuot","Shvios"},
      {""}, {""}, {""},
#line 32 "strings_ashkenazi_poylish.gperf"
      {"Makkot","Makkos"},
#line 80 "strings_ashkenazi_poylish.gperf"
      {"Pekudei","Pkudey"},
      {""}, {""},
#line 46 "strings_ashkenazi_poylish.gperf"
      {"Midot","Midos"},
#line 75 "strings_ashkenazi_poylish.gperf"
      {"Miketz","Mikeitz"},
#line 10 "strings_ashkenazi_poylish.gperf"
      {"Shabbat","Shabbos"},
#line 50 "strings_ashkenazi_poylish.gperf"
      {"Parashat","Parshas"},
      {""},
#line 71 "strings_ashkenazi_poylish.gperf"
      {"Lech-Lecha","Lech-Lecho"},
      {""},
#line 59 "strings_ashkenazi_poylish.gperf"
      {"Bo","Boy"},
#line 174 "strings_ashkenazi_poylish.gperf"
      {"Shushan Purim","Shushon Purim"},
      {""},
#line 92 "strings_ashkenazi_poylish.gperf"
      {"Vaera","Voeiro"},
#line 43 "strings_ashkenazi_poylish.gperf"
      {"Meilah","Meilu"},
#line 41 "strings_ashkenazi_poylish.gperf"
      {"Temurah","Tmiru"},
#line 168 "strings_ashkenazi_poylish.gperf"
      {"Shabbat Shuva","Shabbos Shuvo"},
      {""},
#line 166 "strings_ashkenazi_poylish.gperf"
      {"Shabbat Rosh Chodesh","Shabbos Rosh Choydesh"},
#line 188 "strings_ashkenazi_poylish.gperf"
      {"Tish'a B'Av","Tisho B'ov"},
#line 74 "strings_ashkenazi_poylish.gperf"
      {"Metzora","Metzoyro"},
#line 12 "strings_ashkenazi_poylish.gperf"
      {"Pesachim","Psuchim"},
      {""},
#line 73 "strings_ashkenazi_poylish.gperf"
      {"Matot","Matos"},
      {""},
#line 88 "strings_ashkenazi_poylish.gperf"
      {"Terumah","Trumo"},
#line 36 "strings_ashkenazi_poylish.gperf"
      {"Zevachim","Zvuchim"},
#line 169 "strings_ashkenazi_poylish.gperf"
      {"Shabbat Zachor","Shabbos Zochor"},
#line 140 "strings_ashkenazi_poylish.gperf"
      {"Purim","Purim"},
      {""},
#line 147 "strings_ashkenazi_poylish.gperf"
      {"Av","Ov"},
#line 176 "strings_ashkenazi_poylish.gperf"
      {"Simchat Torah","Simchas Toyro"},
      {""},
#line 63 "strings_ashkenazi_poylish.gperf"
      {"Eikev","Aikev"},
#line 90 "strings_ashkenazi_poylish.gperf"
      {"Toldot","Toldos"},
#line 81 "strings_ashkenazi_poylish.gperf"
      {"Pinchas","Pinchos"},
#line 9 "strings_ashkenazi_poylish.gperf"
      {"Berachot","Bruchos"},
      {""},
#line 164 "strings_ashkenazi_poylish.gperf"
      {"Shabbat Nachamu","Shabbos Nachamu"},
#line 70 "strings_ashkenazi_poylish.gperf"
      {"Korach","Koyrach"},
#line 135 "strings_ashkenazi_poylish.gperf"
      {"Pesach Sheni","Peisach Sheini"},
      {""}, {""},
#line 150 "strings_ashkenazi_poylish.gperf"
      {"Iyyar","Iyyor"},
      {""},
#line 42 "strings_ashkenazi_poylish.gperf"
      {"Keritot","Krisos"},
#line 165 "strings_ashkenazi_poylish.gperf"
      {"Shabbat Parah","Shabbos Poro"},
#line 58 "strings_ashkenazi_poylish.gperf"
      {"Beshalach","Beshalach"},
#line 45 "strings_ashkenazi_poylish.gperf"
      {"Tamid","Tumid"},
#line 167 "strings_ashkenazi_poylish.gperf"
      {"Shabbat Shekalim","Shabbos Shkolim"},
#line 67 "strings_ashkenazi_poylish.gperf"
      {"Ki Tavo","Ki-Sovo"},
#line 39 "strings_ashkenazi_poylish.gperf"
      {"Bechorot","Bchoyros"},
      {""},
#line 190 "strings_ashkenazi_poylish.gperf"
      {"Tu BiShvat","Tu BiShvat"},
#line 97 "strings_ashkenazi_poylish.gperf"
      {"Vayera","Vayeiro"},
#line 95 "strings_ashkenazi_poylish.gperf"
      {"Vayechi","Vayechi"},
#line 57 "strings_ashkenazi_poylish.gperf"
      {"Bereshit","Braishis"},
      {""},
#line 154 "strings_ashkenazi_poylish.gperf"
      {"Sivan","Sivon"},
#line 11 "strings_ashkenazi_poylish.gperf"
      {"Eruvin","Airivin"},
      {""},
#line 13 "strings_ashkenazi_poylish.gperf"
      {"Shekalim","Shkulim"},
#line 144 "strings_ashkenazi_poylish.gperf"
      {"Adar","Odor"},
#line 54 "strings_ashkenazi_poylish.gperf"
      {"Bechukotai","Bechikoysai"},
#line 61 "strings_ashkenazi_poylish.gperf"
      {"Chukat","Chikas"},
#line 86 "strings_ashkenazi_poylish.gperf"
      {"Shoftim","Shoftim"},
#line 99 "strings_ashkenazi_poylish.gperf"
      {"Vayetzei","Vayeitzei"},
      {""},
#line 30 "strings_ashkenazi_poylish.gperf"
      {"Baba Batra","Buvu Basru"},
#line 17 "strings_ashkenazi_poylish.gperf"
      {"Taanit","Taanis"},
#line 40 "strings_ashkenazi_poylish.gperf"
      {"Arachin","Aruchin"},
#line 89 "strings_ashkenazi_poylish.gperf"
      {"Tetzaveh","Tetzave"},
#line 64 "strings_ashkenazi_poylish.gperf"
      {"Emor","Emoyr"},
      {""},
#line 124 "strings_ashkenazi_poylish.gperf"
      {"Erev Tish'a B'Av","Erev Tisho Bov"},
#line 22 "strings_ashkenazi_poylish.gperf"
      {"Ketubot","Ksibos"},
#line 98 "strings_ashkenazi_poylish.gperf"
      {"Vayeshev","Vayeishev"},
#line 76 "strings_ashkenazi_poylish.gperf"
      {"Mishpatim","Mishpotim"},
#line 72 "strings_ashkenazi_poylish.gperf"
      {"Masei","Masei"},
#line 153 "strings_ashkenazi_poylish.gperf"
      {"Sh'vat","Shvat"},
#line 83 "strings_ashkenazi_poylish.gperf"
      {"Sh'lach","Shlach"},
      {""}, {""},
#line 93 "strings_ashkenazi_poylish.gperf"
      {"Vaetchanan","Voeschanan"},
#line 145 "strings_ashkenazi_poylish.gperf"
      {"Adar I","Odor Aleph"},
#line 146 "strings_ashkenazi_poylish.gperf"
      {"Adar II","Odor Beis"},
#line 37 "strings_ashkenazi_poylish.gperf"
      {"Menachot","Menuchos"},
      {""},
#line 19 "strings_ashkenazi_poylish.gperf"
      {"Moed Katan","Moyed Koton"},
#line 183 "strings_ashkenazi_poylish.gperf"
      {"Sukkot V (CH''M)","Sukkos V (CH''M)"},
#line 120 "strings_ashkenazi_poylish.gperf"
      {"Erev Rosh Hashana","Erev Rosh-Hashono"},
      {""}, {""},
#line 56 "strings_ashkenazi_poylish.gperf"
      {"Behar","Behar"},
#line 136 "strings_ashkenazi_poylish.gperf"
      {"Pesach V (CH''M)","Peisach V (CH''M)"},
#line 62 "strings_ashkenazi_poylish.gperf"
      {"Devarim","Dvurim"},
#line 126 "strings_ashkenazi_poylish.gperf"
      {"Havdalah","Havdolo"},
      {""},
#line 77 "strings_ashkenazi_poylish.gperf"
      {"Nasso","Nosso"},
      {""},
#line 23 "strings_ashkenazi_poylish.gperf"
      {"Nedarim","Nedurim"},
#line 192 "strings_ashkenazi_poylish.gperf"
      {"Tzom Gedaliah","Tzom Gdalyo"},
      {""},
#line 104 "strings_ashkenazi_poylish.gperf"
      {"Yitro","Yisro"},
#line 151 "strings_ashkenazi_poylish.gperf"
      {"Kislev","Kislev"},
#line 161 "strings_ashkenazi_poylish.gperf"
      {"Shabbat HaChodesh","Shabbos HaChoydesh"},
#line 53 "strings_ashkenazi_poylish.gperf"
      {"Bamidbar","Bamidbor"},
      {""},
#line 102 "strings_ashkenazi_poylish.gperf"
      {"Vayishlach","Vayishlach"},
#line 47 "strings_ashkenazi_poylish.gperf"
      {"Niddah","Niddu"},
#line 38 "strings_ashkenazi_poylish.gperf"
      {"Chullin","Chillin"},
      {""}, {""},
#line 119 "strings_ashkenazi_poylish.gperf"
      {"Erev Purim","Erev Purim"},
#line 85 "strings_ashkenazi_poylish.gperf"
      {"Shmini","Shmini"},
#line 35 "strings_ashkenazi_poylish.gperf"
      {"Horayot","Hoyroyos"},
#line 66 "strings_ashkenazi_poylish.gperf"
      {"Kedoshim","Kdoyshim"},
      {""},
#line 125 "strings_ashkenazi_poylish.gperf"
      {"Erev Yom Kippur","Erev Yom Kippur"},
      {""},
#line 69 "strings_ashkenazi_poylish.gperf"
      {"Ki Tisa","Ki-Siso"},
      {""}, {""},
#line 162 "strings_ashkenazi_poylish.gperf"
      {"Shabbat HaGadol","Shabbos HaGodol"},
#line 118 "strings_ashkenazi_poylish.gperf"
      {"Erev Pesach","Erev Peisach"},
#line 157 "strings_ashkenazi_poylish.gperf"
      {"Rosh Hashana","Rosh Hashono"},
#line 122 "strings_ashkenazi_poylish.gperf"
      {"Erev Simchat Torah","Erev Simchas Toyro"},
#line 158 "strings_ashkenazi_poylish.gperf"
      {"Rosh Hashana I","Rosh Hashono I"},
#line 159 "strings_ashkenazi_poylish.gperf"
      {"Rosh Hashana II","Rosh Hashono II"},
#line 123 "strings_ashkenazi_poylish.gperf"
      {"Erev Sukkot","Erev Sukkos"},
#line 101 "strings_ashkenazi_poylish.gperf"
      {"Vayikra","Vayikro"},
      {""}, {""},
#line 79 "strings_ashkenazi_poylish.gperf"
      {"Noach","Noyach"},
#line 141 "strings_ashkenazi_poylish.gperf"
      {"Purim Katan","Purim Koton"},
#line 182 "strings_ashkenazi_poylish.gperf"
      {"Sukkot IV (CH''M)","Sukkos IV (CH''M)"},
#line 18 "strings_ashkenazi_poylish.gperf"
      {"Megillah","Megillu"},
#line 14 "strings_ashkenazi_poylish.gperf"
      {"Yoma","Yimu"},
#line 155 "strings_ashkenazi_poylish.gperf"
      {"Tamuz","Tamuz"},
#line 103 "strings_ashkenazi_poylish.gperf"
      {"Vezot Haberakhah","Zoys Habrocho"},
#line 134 "strings_ashkenazi_poylish.gperf"
      {"Pesach IV (CH''M)","Peisach IV (CH''M)"},
      {""}, {""},
#line 82 "strings_ashkenazi_poylish.gperf"
      {"Re'eh","Reei"},
      {""},
#line 16 "strings_ashkenazi_poylish.gperf"
      {"Beitzah","Baitzu"},
      {""},
#line 27 "strings_ashkenazi_poylish.gperf"
      {"Kiddushin","Kiddishin"},
#line 197 "strings_ashkenazi_poylish.gperf"
      {"Yom Kippur","Yom Kippur"},
#line 87 "strings_ashkenazi_poylish.gperf"
      {"Tazria","Tazria"},
#line 21 "strings_ashkenazi_poylish.gperf"
      {"Yevamot","Yevumos"},
      {""}, {""}, {""}, {""}, {""},
#line 148 "strings_ashkenazi_poylish.gperf"
      {"Cheshvan","Cheshvon"},
#line 96 "strings_ashkenazi_poylish.gperf"
      {"Vayeilech","Vayeilech"},
      {""}, {""}, {""},
#line 107 "strings_ashkenazi_poylish.gperf"
      {"Chanukah","Chanukko"},
      {""},
#line 52 "strings_ashkenazi_poylish.gperf"
      {"Balak","Bulok"},
      {""}, {""}, {""}, {""},
#line 28 "strings_ashkenazi_poylish.gperf"
      {"Baba Kamma","Buvu Kamu"},
      {""},
#line 116 "strings_ashkenazi_poylish.gperf"
      {"Chanukah: 8th Day","Chanukko: 8th Day"},
#line 108 "strings_ashkenazi_poylish.gperf"
      {"Chanukah: 1 Candle","Chanukko: 1 Candle"},
#line 115 "strings_ashkenazi_poylish.gperf"
      {"Chanukah: 8 Candles","Chanukko: 8 Candles"},
      {""}, {""},
#line 163 "strings_ashkenazi_poylish.gperf"
      {"Shabbat Machar Chodesh","Shabbos Mochor Choydesh"},
#line 49 "strings_ashkenazi_poylish.gperf"
      {"Daf Yomi","Daf Yoymi"},
#line 160 "strings_ashkenazi_poylish.gperf"
      {"Shabbat Chazon","Shabbos Chazon"},
#line 127 "strings_ashkenazi_poylish.gperf"
      {"Lag BaOmer","Lag Boymer"},
      {""}, {""}, {""},
#line 114 "strings_ashkenazi_poylish.gperf"
      {"Chanukah: 7 Candles","Chanukko: 7 Candles"},
#line 48 "strings_ashkenazi_poylish.gperf"
      {"Daf Yomi: %s %d","Daf Yoymi: %s %d"},
#line 44 "strings_ashkenazi_poylish.gperf"
      {"Kinnim","Kinnim"},
      {""},
#line 78 "strings_ashkenazi_poylish.gperf"
      {"Nitzavim","Nitzovim"},
#line 113 "strings_ashkenazi_poylish.gperf"
      {"Chanukah: 6 Candles","Chanukko: 6 Candles"},
#line 26 "strings_ashkenazi_poylish.gperf"
      {"Gitin","Gitin"},
#line 60 "strings_ashkenazi_poylish.gperf"
      {"Chayei Sara","Chayei Suru"},
#line 143 "strings_ashkenazi_poylish.gperf"
      {"Rosh Chodesh","Rosh Choydesh"},
      {""},
#line 112 "strings_ashkenazi_poylish.gperf"
      {"Chanukah: 5 Candles","Chanukko: 5 Candles"},
#line 142 "strings_ashkenazi_poylish.gperf"
      {"Rosh Chodesh %s","Rosh Choydesh %s"},
      {""}, {""},
#line 105 "strings_ashkenazi_poylish.gperf"
      {"Asara B'Tevet","Asoro Beteyves"},
#line 31 "strings_ashkenazi_poylish.gperf"
      {"Sanhedrin","Sanhedrin"},
#line 152 "strings_ashkenazi_poylish.gperf"
      {"Nisan","Nison"},
      {""},
#line 34 "strings_ashkenazi_poylish.gperf"
      {"Avodah Zarah","Avoydu Zuru"},
      {""},
#line 187 "strings_ashkenazi_poylish.gperf"
      {"Ta'anit Esther","Taanis Ester"},
      {""}, {""}, {""},
#line 94 "strings_ashkenazi_poylish.gperf"
      {"Vayakhel","Vayakhel"},
#line 111 "strings_ashkenazi_poylish.gperf"
      {"Chanukah: 4 Candles","Chanukko: 4 Candles"},
#line 24 "strings_ashkenazi_poylish.gperf"
      {"Nazir","Nuzir"},
      {""}, {""}, {""},
#line 110 "strings_ashkenazi_poylish.gperf"
      {"Chanukah: 3 Candles","Chanukko: 3 Candles"},
      {""},
#line 198 "strings_ashkenazi_poylish.gperf"
      {"Yom Yerushalayim","Yom Yerusholayim"},
      {""},
#line 100 "strings_ashkenazi_poylish.gperf"
      {"Vayigash","Vayigash"},
#line 109 "strings_ashkenazi_poylish.gperf"
      {"Chanukah: 2 Candles","Chanukko: 2 Candles"},
      {""}, {""}, {""}, {""}, {""},
#line 51 "strings_ashkenazi_poylish.gperf"
      {"Achrei Mot","Achrai"},
#line 29 "strings_ashkenazi_poylish.gperf"
      {"Baba Metzia","Buvu Metziu"},
#line 121 "strings_ashkenazi_poylish.gperf"
      {"Erev Shavuot","Erev Shvuos"},
#line 196 "strings_ashkenazi_poylish.gperf"
      {"Yom HaZikaron","Yom HaZikaron"},
      {""}, {""}, {""}, {""},
#line 128 "strings_ashkenazi_poylish.gperf"
      {"Leil Selichot","Slichos"},
      {""}, {""}, {""}, {""}, {""},
#line 173 "strings_ashkenazi_poylish.gperf"
      {"Shmini Atzeret","Shmini Atzeres"},
      {""}, {""}, {""},
#line 20 "strings_ashkenazi_poylish.gperf"
      {"Chagigah","Chagigu"},
      {""}, {""}, {""}, {""},
#line 65 "strings_ashkenazi_poylish.gperf"
      {"Ha'Azinu","Haazini"},
      {""}, {""},
#line 117 "strings_ashkenazi_poylish.gperf"
      {"Days of the Omer","Oymer"},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 68 "strings_ashkenazi_poylish.gperf"
      {"Ki Teitzei","Ki-Seitzei"},
#line 186 "strings_ashkenazi_poylish.gperf"
      {"Ta'anit Bechorot","Taanis Bchoros"},
#line 55 "strings_ashkenazi_poylish.gperf"
      {"Beha'alotcha","Bahaaloschu"},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 195 "strings_ashkenazi_poylish.gperf"
      {"Yom HaShoah","Yom HaShoah"},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 193 "strings_ashkenazi_poylish.gperf"
      {"Tzom Tammuz","Tzom Tammuz"},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 194 "strings_ashkenazi_poylish.gperf"
      {"Yom HaAtzma'ut","Yom HaAtzma'ut"},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 199 "strings_ashkenazi_poylish.gperf"
      {"Yom HaAliyah","Yom HaAliyah"},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 106 "strings_ashkenazi_poylish.gperf"
      {"Candle lighting","Hadlokas neyros"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
