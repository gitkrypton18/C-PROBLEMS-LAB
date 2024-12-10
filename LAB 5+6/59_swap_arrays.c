// program to add two arrays
#include <stdio.h>
int main()
{
    int arr1[10], arr2[10];
    printf("enter the elements of array 1");
    for (int i = 0; i < 10; i++)
    {

        scanf("%d", &arr1[i]);
    }
    printf("enter the elements of array 2");
    for (int i = 0; i < 10; i++)
    {

        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 10; i++)
    { // swapping
        arr1[i] = arr1[i] + arr2[i];
        arr2[i] = arr1[i] - arr2[i];
        arr1[i] = arr1[i] - arr2[i];
    }
    printf("the elements of arr1 is \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr1[i]);
    }
    printf("\n\n");
    printf("the elements of arr2 is \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr2[i]);
    }

    return 0;
}