// WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES

#include <stdio.h>
int main()
{
    float sales;
    float com;
    printf("enter the sales \n");
    scanf("%f", &sales);
    if (sales <= 500)
    {
        com = 0.05 * sales;
    }
    else if (sales > 500 && sales <= 2000)
    {
        com = 35 + 0.1 * (sales - 500);
    }
    else if (sales > 2000 && sales <= 5000)
    {
        com = 185 + 0.12 * (sales - 2000);
    }
    else if (sales > 5000)
    {
        com = 0.125 * sales;
    }

    printf("the total commission is %f", com);
    return 0;
}
