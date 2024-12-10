
// Printing the table of any number
#include <stdio.h>
int main()
{
    int a = 6, i;
    for (i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d", a, i, a * i);
        printf("\n");
    }
}