// PROGRAM TO RED AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS
#include <stdio.h>
int main()
{

    int n = 10, arr[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("enter the array elements\n");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("the sum of all element is %d", sum);
}