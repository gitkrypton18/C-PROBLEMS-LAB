// to check prime or composite
#include <stdio.h>
int main()
{
    int prime = 1, n;
    printf("enter the number to find prime or not");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
    }
    if (prime == 1)
    {
        printf("the given number is a prime number ");
    }

    else if (prime == 0)
    {
        printf("the given number is a composite number");
    }

    return 0;
}