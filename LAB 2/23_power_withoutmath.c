// // PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER
// FILE(<MATH.H>).

#include <stdio.h>
int main()
{
    int k, count, power;
    printf("enter the two number and its exp");
    scanf("%d %d", &k, &count);
    power = 1;
    for (int i = 1; i <= count; i++)
    {
        power = power * k;
    }
    printf("the value of %d^%d is %d", k, count, power);
    return 0;
}