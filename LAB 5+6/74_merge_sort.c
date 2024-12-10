// // Given are one dimensional arrays A and B which are sorted in ascending order.
// Write a program to merge them into a single sorted array C that contains every
// item form array A and B, in ascending order.

#include <stdio.h>
int main()
{
    int temp;
    int arr1[5] = {1, 3, 5, 7, 9}, arr2[5] = {2, 4, 6, 8, 10};
    int arr[10];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = arr1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i + 5] = arr2[i];
    }

    for (int j = 0; j < 10; j++) // sorting for loop
    {
        for (int i = 0; i < 9; i++)
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
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}