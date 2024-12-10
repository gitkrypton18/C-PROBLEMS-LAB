// program to print odd numbers series
#include <stdio.h>
int main()
{
    int k, i = 1;
    printf("Enter upto terms of the series\n");
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        int n = 2 * i + 1;
        printf("%d\t", n);
    }

    return 0;
}