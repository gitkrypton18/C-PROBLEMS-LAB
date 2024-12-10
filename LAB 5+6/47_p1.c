/*
A
AB
ABC
ABCD
ABCDE
*/
#include <stdio.h>
int main()
{
    char alpha;
    for (int i = 0; i < 5; i++)
    {
        char alpha = 'A';

        for (int j = 0; j <= i; j++)
        {
            printf("%c", alpha);
            alpha++;
        }

        printf("\n");
    }

    return 0;
}