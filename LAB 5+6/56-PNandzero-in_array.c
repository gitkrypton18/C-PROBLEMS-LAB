// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, NEGATIVE, AND ZERO ELEMENTS.
#include <stdio.h>
int main()
{

    int n = 10, arr[n], positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        printf("enter the array elements\n");
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            positive++;
        }
        if (arr[i] == 0)
        {
            zero++;
        }
        if (arr[i] < 0)
        {
            negative++;
        }
    }
    printf("the no of positive of array elements is %d\n", positive);
    printf("the no of negative of array elements is %d\n", negative);
    printf("the no of zero of array elements is %d\n", zero);

    return 0;
}