/*
A
BB
CCC
DDDD
EEEEE
*/
#include <stdio.h>
int main()
{
    char alpha = 'A';
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("%c", alpha);
        }
        alpha++;
        printf("\n");
    }

    return 0;
}