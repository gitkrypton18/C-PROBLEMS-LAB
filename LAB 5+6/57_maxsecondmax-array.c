// program to read and array and find max and second max
#include <stdio.h>

int main()
{
    int n, x = 0, y = 0, z = 0;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the numbers : ");
        scanf("%d", &arr[i]);
        if (arr[i] > x)
        { // swapping the values
            x = x + arr[i];
            arr[i] = x - arr[i];
            x = x - arr[i];
        }
        if (arr[i] > y && arr[i] < x)
        { // swapping the values
            y = y + arr[i];
            arr[i] = y - arr[i];
            y = y - arr[i];
        }
        // if (arr[i] > z && arr[i] < x && arr[i] < y)
        // {// swapping the values
        //     z = z + arr[i];
        //     arr[i] = z - arr[i];
        //     z = z - arr[i];
        // }
        // }
    }
    printf("\nthe 1st greatest is %d\nthe 2nd greatest is %d", x, y);
}