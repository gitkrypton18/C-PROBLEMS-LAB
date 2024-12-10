// program to find max and min
#include <stdio.h>
int main()
{
    int n, a, x = 0, y = 0, b;
    printf("Enter the no of numbers required\n");
    scanf("%d", &n);

    printf("enter the numbers : ");
    scanf("%d", &a);
    for (int j = 0; j < n - 1; j++)
    {

        printf("enter the numbers : ");
        scanf("%d", &b);
        if (b < a)
        {
            a = b;
        }

        if (b > x)
        {
            x = x + b;
            b = x - b;
            x = x - b;
        }
        if (b > y && b < x)
        {
            y = y + b;
            b = y - b;
            y = y - b;
        }
    }
    printf("the greatest is %d\n", x);
    printf("the smallest is %d", a);

    return 0;
}