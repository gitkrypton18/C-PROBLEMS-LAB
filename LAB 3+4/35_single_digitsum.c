// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGITS OF N.
// eg :-- 456 => 4+5+6 => 15 => 1+5 => 6

#include <stdio.h>
int main()
{
    int num, sum_digit;
    printf("enter the number to be digit sum\n");
    scanf("%d", &num);

    while (num >= 10)
    {
        sum_digit = 0;
        while (num != 0)
        {
            sum_digit += num % 10;
            num /= 10;
        }
        num = sum_digit;
    }

    printf("the single sum of digits of a given number is %d\n", num);
    return 0;
}