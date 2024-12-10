// program to print the sum of all odd and even numbers between 1 and n
#include <stdio.h>
int main()
{
    int n, sum_odd, sum_even;
    printf("enter the value of n\n");

    scanf("%d", &n);
    int k = (n - 1) / 2;
    int l = n / 2;
    if (n % 2 == 0)
    {
        sum_odd = (n - 1) * (n - 1);
        sum_even = l * (l + 1);
    }

    else if ((n % 2) != 0)
    {
        sum_odd = n * n;
        sum_even = k * (k + 1);
    }

    printf("the sum of all odd numbers between 1 and n is %d\n", sum_odd);
    printf("the sum of all even numbers between 1 andd n is %d\n", sum_even);

    return 0;
}
