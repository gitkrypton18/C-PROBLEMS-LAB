// program to get sum of digit of a given number
#include <stdio.h>
int main()
{
    int num, temp, sum = 0;
    printf("enter the number to be digit sum\n");
    scanf("%d", &num);
    while (num != 0)
    {
        temp = num % 10;
        sum += temp;
        num /= 10;
    }
    printf("the sum of digits of given number is  %d\n", sum);

    return 0;
}