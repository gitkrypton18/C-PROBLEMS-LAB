// READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)
#include <stdio.h>
int main()
{
    int k;
    printf("Enter the integer whose factors required");
    scanf("%d", &k);
    for (int i = 1; i <= k; i++)
    {
        if (k % i == 0)
        {
            printf(" %d \t ", i);
        }
        else
        {
            continue;
        }
    }

    return 0;
}