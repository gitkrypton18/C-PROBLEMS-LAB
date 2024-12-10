// program to reverse an array
#include <stdio.h>
int main()
{
    int arroriginal[7], i, j;
    printf("enter the array elements\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &arroriginal[i]);
    }

    for (i = 0; i < 7; i++)
    {
        j = 7 - i - 1;
        printf("%d\t", arroriginal[j]);
    }

    return 0;
}