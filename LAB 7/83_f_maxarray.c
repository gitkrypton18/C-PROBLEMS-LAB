// WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.
#include <stdio.h>
int maxer(int arr[], int size)
{

    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf("enter the size of arrray\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array elements\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maximum = maxer(arr, n);
    printf("The maximum in this array is \n%d\n", maximum);
}
