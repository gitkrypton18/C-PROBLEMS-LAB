// program to add two arrays
#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], arrsum[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the elements of array 1 : \n");
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("enter the elements of array 2 : \n");
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        arrsum[i] = arr1[i] + arr2[i];
        printf("the element at %d position is %d\n", i, arrsum[i]);
    }

    return 0;
}