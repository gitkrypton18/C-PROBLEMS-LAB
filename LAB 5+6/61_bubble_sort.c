// program to bubble sort an array
#include <stdio.h>
int main()
{
    int n, temp;
    printf("enter the array size\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array elements\n");
    for (int i = 0; i < n; i++) // input for loop
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++) // sorting for loop
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("array in increasing order is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}