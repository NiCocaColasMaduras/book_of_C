#include <stdio.h>
#include "totaller.h"

// со страницы 213 - 216

float mercury_day_in_earth_days();
int houts_in_earth_day();

int main()
{
    float length_of_day = mercury_day_in_earth_days();
    int hours = houts_in_earth_day();
    float day = length_of_day * hours;
    printf("День на Меркурии = %f часам\n", day);
    return 0;
}

float mercury_day_in_earth_days()
{
    return 58.65;
}

int houts_in_earth_day()
{
    return 24;
}