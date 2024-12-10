// PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.
#include <stdio.h>
int main()
{
    int alpha_array[3][3];
    int beta_array[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &alpha_array[i][j]);
        }
    }

    printf("the transpose matrix is \n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            beta_array[i][j] = alpha_array[j][i];

            printf("%d \t ", beta_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}