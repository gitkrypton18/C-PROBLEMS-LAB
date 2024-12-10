// program to print square numbers series
#include <stdio.h>
int main()
{
    int k;
    printf("Enter upto terms of the series\n");
    scanf("%d", &k);

    for (int i = 1; i <= k; i++)
    {
        int n = i * i;

        printf("%d\t", n);
    }

    return 0;
}