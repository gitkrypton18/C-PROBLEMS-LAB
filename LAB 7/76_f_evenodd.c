// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include <stdio.h>
void Checker(int a)
{
    if (a % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}
int main()
{
    int n;
    printf("enter the number to check odd/even\n");
    scanf("%d", &n);
    Checker(n);
}