// program to find max out of three numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three numbers\n ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a is greatest");
        }
        else if (c > a)
        {
            printf("c is greatest");
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("b is greatest");
        }
        else if (c > b)
        {
            printf("c is greatest");
        }
    }

    return 0;
}