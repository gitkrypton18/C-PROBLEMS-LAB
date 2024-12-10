// program to read two matrices and multiply them really
#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], M[3][3], sum;
    // input mat1
    printf("Enter the elements of first matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    // input mat2
    printf("Enter the elements of second matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // multiplier mat declaration

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {

                sum += (A[i][k]) * (B[k][j]);
                M[i][j] = sum;
            }
        }
    }

    // printing the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}