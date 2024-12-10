
// PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.
#include <stdio.h>
int main()
{
    int k;
    printf("enter upto which series is required\n");
    scanf("%d", &k);
    for (int i = 1; i <= k; i++)
    {
        printf("%d/%d!\t", i, i);
    }

    return 0;
}