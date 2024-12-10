/*
10000
01000
00100
00010
00001
*/
#include <stdio.h>
int main()
{
    int k;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                k = 1;
            }
            else if (i != j)
            {
                k = 0;
            }

            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}