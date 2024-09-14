#include "main.h"
#define SecPerDay 86400
#define SecPerHour 3600
#define SecPerMin 60

/**
 * Day_hour_min_sec - converts a number of seconds
 * to days, hours, minutes, seconds. in sequence.
 * @seconds: given number of seconds
 */
void Day_hour_min_sec(int seconds)
{
    int Number_of_days, Number_of_hours, Number_of_min, Number_of_sec;
    int Remainder;

    Number_of_days = floor(seconds / SecPerDay);
    Remainder = seconds % SecPerDay;
    printf("%d:", Number_of_days);

    Number_of_hours = floor(Remainder / SecPerHour);
    Remainder = Remainder % SecPerHour;
    printf(" %d:", Number_of_hours);

    Number_of_min = floor(Remainder / SecPerMin);
    Remainder = Remainder % SecPerMin;
    printf(" %d:", Number_of_min);

    Number_of_sec = Remainder;
    printf(" %d\n", Number_of_sec);
}
