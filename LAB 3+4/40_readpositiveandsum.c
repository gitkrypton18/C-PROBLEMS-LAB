// READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ
#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("enter a list of numbers\n ");

    for (int i = 0;; i++)
    {

        scanf("%d", &a);
        if (a >= 0)
        {
            sum += a;
        }
        else if (a < 0)
        {
            break;
        }
    }
    printf("the sum of positive numbers is %d ", sum);

    return 0;
}