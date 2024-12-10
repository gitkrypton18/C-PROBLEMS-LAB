// program to selection sort an array

#include <stdio.h>
int main()
{
    int n, temp, ix_min;
    printf("enter the array size\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array elements\n");
    for (int i = 0; i < n; i++) // input for loop
    {
        scanf("%d", &arr[i]);
    }

    // doing the selection sort

    for (int j = 0; j < n - 1; j++) // sorting for loop
    {
        ix_min = j;
        for (int i = j + 1; i < n; i++)
        {
            if (arr[ix_min] > arr[i])
            {
                ix_min = i;
            }
        }
        temp = arr[j];
        arr[j] = arr[ix_min];
        arr[ix_min] = temp;
    }
    printf("the sorted elements are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}