// PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROW
#include <stdio.h>
int main()
{
    int alpha_array[3][3];
    printf("enter the array elements\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &alpha_array[i][j]);
        }
    }
    int row_sum[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            row_sum[i] += alpha_array[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("the row%d sum is %d \n", i + 1, row_sum[i]);
    }

    return 0;
}
