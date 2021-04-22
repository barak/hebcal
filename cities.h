typedef struct city
{
    char *name;
    int latdeg, latmin, longdeg, longmin;
    char *tz;
} city_t;

city_t cities[] =
{
    /* name, latdeg, latmin, longdeg, longmin, tz */
    {"Ashdod", 31, 48, -34, -38, "Asia/Jerusalem"},
    {"Atlanta", 33, 45, 84, 23, "America/New_York"},
    {"Austin", 30, 16, 97, 45, "America/Chicago"},
    {"Baghdad", 33, 14, -44, -22, "Asia/Baghdad"},
    {"Basle", 47, 34, -7, -35, "Europe/Zurich"},
    {"Beer Sheva", 31, 15, -34, -47, "Asia/Jerusalem"},
    {"Berlin", 52, 31, -13, -24, "Europe/Berlin"},
    {"Baltimore", 39, 17, 76, 36, "America/New_York"},
    {"Bogota", 4, 36, 74, 5, "America/Bogota"},
    {"Boston", 42, 20, 71, 4, "America/New_York"},
    {"Bozen", 46, 30, -11, -21, "Europe/Rome"},
    {"Budapest", 47, 30, -19, -23, "Europe/Budapest"},
    {"Buenos Aires", -34, -37, 58, 24, "America/Argentina/Buenos_Aires"},
    {"Buffalo", 42, 53, 78, 52, "America/New_York"},
    {"Chicago", 41, 50, 87, 45, "America/Chicago"},
    {"Cincinnati", 39, 6, 84, 31, "America/New_York"},
    {"Cleveland", 41, 30, 81, 41, "America/New_York"},
    {"Cologne", 50, 56, -6, -48, "Europe/Berlin"},
    {"Dallas", 32, 47, 96, 48, "America/Chicago"},
    {"Denver", 39, 44, 104, 59, "America/Denver"},
    {"Detroit", 42, 20, 83, 2, "America/New_York"},
    {"Dresden", 51, 3, -13, -44, "Europe/Berlin"},
    {"Dusseldorf", 51, 14, -6, -46, "Europe/Berlin"},
    {"Eilat", 29, 33, -34, -57, "Asia/Jerusalem"},
    {"Frankfurt", 50, 7, -8, -41, "Europe/Berlin"},
    {"Gibraltar", 36, 8, 5, 21, "Europe/Gibraltar"},
    {"Haifa", 32, 49, -34, -59, "Asia/Jerusalem"},
    {"Hamburg", 53, 55, -9, -59, "Europe/Berlin"},
    {"Hawaii", 19, 30, 155, 30, "Pacific/Honolulu"},
    {"Helsinki", 60, 10, 24, 55, "Europe/Helsinki"},
    {"Houston", 29, 46, 95, 22, "America/Chicago"},
    {"Jerusalem", 31, 47, -35, -14, "Asia/Jerusalem"},
    {"Johannesburg", -26, -10, -28, -2, "Africa/Johannesburg"},
    {"Kiev", 50, 28, -30, -29, "Europe/Kiev"},
    {"La Paz", -16, -30, 68, 9, "America/La_Paz"},
    {"Livingston", 40, 17, 74, 18, "America/New_York"},
    {"Leipzig", 51, 20, -12, -22, "Europe/Berlin"},
    {"Las Vegas", 36, 10, 115, 8, "America/Los_Angeles"},
    {"London", 51, 30, 0, 10, "Europe/London"},
    {"Los Angeles", 34, 4, 118, 15, "America/Los_Angeles"},
    {"Marseilles", 43, 18, -5, -22, "Europe/Paris"},
    {"Miami", 25, 46, 80, 12, "America/New_York"},
    {"Minneapolis", 44, 58, 93, 15, "America/Chicago"},
    {"Melbourne", -37, -52, -145, -8, "Australia/Melbourne"},
    {"Mexico City", 19, 24, 99, 9, "America/Mexico_City"},
    {"Montreal", 45, 30, 73, 36, "America/Montreal"},
    {"Moscow", 55, 45, -37, -42, "Europe/Moscow"},
    {"Munich", 48, 14, -11, -35, "Europe/Berlin"},
    {"New York", 40, 43, 74, 1, "America/New_York"},
    {"Omaha", 41, 16, 95, 56, "America/Chicago"},
    {"Ottawa", 45, 42, 75, 71, "America/Toronto"},
    {"Panama City", 8, 58, 79, 32, "America/Panama"},
    {"Paris", 48, 52, -2, -20, "Europe/Paris"},
    {"Pawtucket",  41, 52, 71, 23, "America/New_York"},
    {"Petach Tikvah", 32, 5, -34, -53, "Asia/Jerusalem"},
    {"Philadelphia", 39, 57, 75, 10, "America/New_York"},
    {"Phoenix", 33, 27, 112, 4, "America/Phoenix"},
    {"Pittsburgh", 40, 26, 80, 0, "America/New_York"},
    {"Providence",  41, 50, 71, 23, "America/New_York"},
    {"Portland", 45, 31, 122, 40, "America/Los_Angeles"},
    {"Saint Louis", 38, 38, 90, 12, "America/Chicago"},
    {"Saint Petersburg", 59, 53, -30, -15, "Europe/Moscow"},
    {"Salzburg", 47, 49, -13, -4, "Europe/Vienna"},
    {"San Diego", 32, 43, 117, 9, "America/Los_Angeles"},
    {"San Francisco", 37, 47, 122, 25, "America/Los_Angeles"},
    {"Sao Paulo", -23, -33, 46, 39, "America/Sao_Paulo"},
    {"Seattle", 47, 36, 122, 20, "America/Los_Angeles"},
    {"Sydney", -33, -55, -151, -17, "Australia/Sydney"},
    {"Tel Aviv", 32, 5, -34, -46, "Asia/Jerusalem"},
    {"Tiberias", 32, 58, -35, -32, "Asia/Jerusalem"},
    {"Toronto", 43, 38, 79, 24, "America/Toronto"},
    {"Vancouver", 49, 16, 123, 7, "America/Vancouver"},
    {"Vienna", 48, 12, -16, -22, "Europe/Vienna"},
    {"White Plains",  41, 2, 73, 45, "America/New_York"},
    {"Washington DC", 38, 55, 77, 0, "America/New_York"},
    {"Worcester",  42, 16, 71, 52, "America/New_York"},
    {"Zurich", 47, 22, -8, -32, "Europe/Zurich"},
    {0, 0, 0, 0, 0, 0}
};
