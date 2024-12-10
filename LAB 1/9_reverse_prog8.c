// Earth takes a period of revolution of 31558150 seconds.
// Write a C program to convert this into number of days,hrs,mins.
#include <stdio.h>
int main()
{
    int sec, days, hours, minutes, seconds;
    printf("Enter days,hours,minutes,seconds\n");
    scanf("%d\n%d\n%d\n%d", &days, &hours, &minutes, &sec);
    days *= 86400;
    hours *= 3600;
    minutes *= 60;
    sec = sec + days + hours + minutes;

    printf("The seconds are %d\n", sec);
}