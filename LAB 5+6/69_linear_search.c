// program to perform a linear search on a array
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

    printf("\nEnter the element to be found:\n");
    scanf("%d", &temp);

    for (int i = 0; i < n; i++) // performing the linear search on array
    {
        if (temp == arr[i])
        {
            printf("The INDEX of %d is %d", temp, i);
        }
    }

    return 0;
}