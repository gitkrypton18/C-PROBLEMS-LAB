// PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT
#include <stdio.h>
int main()
{
    int arr[3][3];
    printf("enter the 3x3 elements \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxi = arr[0][0], mini = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
            if (arr[i][j] <= mini)
            {
                mini = arr[i][j];
            }
        }
    }
    // printing the results
    printf("the maximum element is %d\n", maxi);
    printf("the minimum element is %d\n", mini);
    return 0;
}