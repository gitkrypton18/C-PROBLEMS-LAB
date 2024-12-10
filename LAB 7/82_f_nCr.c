// write a ffunction to find the nCr factorial of a number
#include <stdio.h>
int facto(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }

    return fact;
}
int main()
{
    int n, r;
    printf("Enter the n and r number to find nCr \n");
    scanf("%d %d", &n, &r);

    printf("the nCr is %d", facto(n) / (facto(r) * facto(n - r)));

    return 0;
}
