// Earth takes a period of revolution of 31558150 seconds.
// Write a C program to convert this into number of days,hrs,mins.
#include <stdio.h>
int main()
{
    int total_sec = 31558150, days, hours, minutes, seconds;
    days = total_sec / 86400;
    total_sec %= 86400;

    hours = total_sec / 3600;
    total_sec %= 3600;

    minutes = total_sec / 60;
    total_sec %= 60;

    printf("The days are %d\nhours are %d\nminutes are %d\nseconds are %d\n", days, hours, minutes, total_sec);
}