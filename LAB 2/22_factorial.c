// program to calculate the factorial of a given number
#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("enter the number whose factorial required\n");
    scanf("%d", &n);
    if (n == 0)
    {
        fact = 1;
        printf("the factorial is %d", fact);
    }
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("the factorial is %d", fact);
    }
    if (n < 0)
    {
        printf("the factorial is not defined");
    }

    return 0;
}