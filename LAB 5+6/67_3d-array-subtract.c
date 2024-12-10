// PROGRAM TO READ A 3*3 MATRIX AND subtract THEIR VALUE AND STORE THEM IN THIRD MATRIX.
#include <stdio.h>
int main()
{
    int alpha_array[3][3];
    int beta_array[3][3];
    int gamma_array[3][3];
    printf("Enter the elements of first matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &alpha_array[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &beta_array[i][j]);
        }
    }
    printf("the sum of two matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            gamma_array[i][j] = alpha_array[i][j] - beta_array[i][j];

            printf("%d\t", gamma_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}