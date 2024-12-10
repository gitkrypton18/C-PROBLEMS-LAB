// program to print the
//     1
//    12
//   123
//  1234
// 12345
#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int k = 4; k > i; k--)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }

    return 0;
}