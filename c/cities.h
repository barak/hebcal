typedef struct city
{
    char *name;
    int latdeg, latmin, longdeg, longmin, TZ, DST_scheme;
}
city_t;

city_t cities[] =
{
    /* name, latdeg, latmin, longdeg, longmin, TZ, DST_scheme */
    {"Ashdod", 31, 48, -34, -38, 2, DST_ISRAEL},
    {"Atlanta", 33, 45, 84, 23, -5, DST_USOFA},
    {"Austin", 30, 16, 97, 45, -6, DST_USOFA},
    {"Beer Sheva", 31, 15, -34, -47, 2, DST_ISRAEL},
    {"Berlin", 52, 31, -13, -24, 1, DST_EU},
    {"Baltimore", 39, 17, 76, 36, -5, DST_USOFA},
    {"Bogota", 4, 36, 74, 5, -5, DST_NONE},
    {"Boston", 42, 20, 71, 4, -5, DST_USOFA},
    {"Buenos Aires", -34, -37, 58, 24, -3, DST_NONE},
    {"Buffalo", 42, 53, 78, 52, -5, DST_USOFA},
    {"Chicago", 41, 50, 87, 45, -6, DST_USOFA},
    {"Cincinnati", 39, 6, 84, 31, -5, DST_USOFA},
    {"Cleveland", 41, 30, 81, 41, -5, DST_USOFA},
    {"Dallas", 32, 47, 96, 48, -6, DST_USOFA},
    {"Denver", 39, 44, 104, 59, -7, DST_USOFA},
    {"Detroit", 42, 20, 83, 2, -5, DST_USOFA},
    {"Eilat", 29, 33, -34, -57, 2, DST_ISRAEL},
    {"Gibraltar", 36, 0, 5, 0, -10, DST_USOFA},
    {"Haifa", 32, 49, -34, -59, 2, DST_ISRAEL},
    {"Hawaii", 19, 30, 155, 30, -10, DST_NONE},
    {"Houston", 29, 46, 95, 22, -6, DST_USOFA},
    {"Jerusalem", 31, 47, -35, -14, 2, DST_ISRAEL},
    {"Johannesburg", -26, -10, -28, -2, 2, DST_NONE},
    {"Kiev", 50, 28, -30, -29, 2, DST_EU},
    {"La Paz", -16, -30, 68, 9, -4, DST_NONE},
    {"London", 51, 30, 0, 10, 0, DST_EU},
    {"Los Angeles", 34, 4, 118, 15, -8, DST_USOFA},
    {"Miami", 25, 46, 80, 12, -5, DST_USOFA},
    {"Melbourne", -37, -52, -145, -8, 10, DST_AUNZ},
    {"Mexico City", 19, 24, 99, 9, -6, DST_USOFA},
    {"Montreal", 45, 30, 73, 36, -5, DST_USOFA},
    {"Moscow", 55, 45, -37, -42, 3, DST_EU},
    {"New York", 40, 43, 74, 1, -5, DST_USOFA},
    {"Omaha", 41, 16, 95, 56, -7, DST_USOFA},
    {"Ottawa", 45, 42, 75, 71, -5, DST_USOFA},
    {"Paris", 48, 52, -2, -20, 1, DST_EU},
    {"Petach Tikvah", 32, 5, -34, -53, 2, DST_ISRAEL},
    {"Philadelphia", 39, 57, 75, 10, -5, DST_USOFA},
    {"Phoenix", 33, 27, 112, 4, -7, DST_NONE},
    {"Pittsburgh", 40, 26, 80, 0, -5, DST_USOFA},
    {"Saint Louis", 38, 38, 90, 12, -6, DST_USOFA},
    {"Saint Petersburg", 59, 53, -30, -15, 3, DST_EU},
    {"San Francisco", 37, 47, 122, 25, -8, DST_USOFA},
    {"Seattle", 47, 36, 122, 20, -8, DST_USOFA},
    {"Sydney", -33, -55, -151, -17, 10, DST_AUNZ},
    {"Tel Aviv", 32, 5, -34, -46, 2, DST_ISRAEL},
    {"Tiberias", 32, 58, -35, -32, 2, DST_ISRAEL},
    {"Toronto", 43, 38, 79, 24, -5, DST_USOFA},
    {"Vancouver", 49, 16, 123, 7, -8, DST_USOFA},
    {"White Plains",  41, 2, 73, 45, -5, DST_USOFA },
    {"Washington DC", 38, 55, 77, 0, -5, DST_USOFA},
    {0, 0, 0, 0, 0, 0, 0}
};
