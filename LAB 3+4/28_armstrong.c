// program to check whether a number is armstorng or not for 3 digitnumber
// definition : any number like 153 = 1cube + 5cube + 3cube also 4digit then power4 kare
// goto 78_f_armstrong.c
// more exhilarating
#include <stdio.h>
int main()
{
    int n; // enter a three digit number
    printf("enter a three digit number");
    scanf("%d", &n);
    int k = n;
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    n /= 10;
    int c = n % 10;

    int check = (a * a * a) + (b * b * b) + (c * c * c);
    if (check == k)
    {
        printf("n is an armstrong number");
    }
    else if (check != k)
        printf("n is not an armstrong number");

    return 0;
}