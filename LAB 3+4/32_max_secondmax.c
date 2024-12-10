// program to find max and second max
#include <stdio.h>
int main()
{
    int n, a, x = 0, y = 0, z = 0;
    printf("Enter the no of numbers required\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the numbers : ");
        scanf("%d", &a);
        if (a > x)
        {
            x = x + a;
            a = x - a;
            x = x - a;
        }
        if (a > y && a < x)
        {
            y = y + a;
            a = y - a;
            y = y - a;
        }
        if (a > z && a < x && a < y)
        {
            z = z + a;
            a = z - a;
            z = z - a;
        }
    }
    printf("the 1st greatest is %d\nthe 2nd greatest is %d", x, y);

    return 0;
}