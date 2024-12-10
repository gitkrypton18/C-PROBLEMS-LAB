// program to perform a occurence on an array
#include <stdio.h>
int main()
{
    int n, temp, counter = 0;
    printf("enter the array size\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array elements\n");
    for (int i = 0; i < n; i++) // input for loop
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element which occurence required:\n");
    scanf("%d", &temp);

    for (int i = 0; i < n; i++) // performing the linear search on array
    {
        if (temp == arr[i])
        {
            counter++;
        }
    }
    printf("In this Array %d occured exactly %d times", temp, counter);

    return 0;
}