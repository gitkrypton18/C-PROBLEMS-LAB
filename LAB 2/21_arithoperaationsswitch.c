// same as 20 program therefore copy
//  program which works like a calculater using switch case
#include <stdio.h>
int main()
{
    int a, b;
    char o;

    printf("enter two integers a and b and enter the operator between them only DMAS a\n ");
    scanf("%d%c%d", &a, &o, &b);
    switch (o)
    {
    case '*':
        printf("the multiplication of a and b is %d", (a * b));
        break;
    case '/':
        printf("the division of a by b is %d", (a / b));
        break;
    case '+':
        printf("the addition of a and b is %d", (a + b));
        break;
    case '-':
        printf("the difference of a and b is %d", (a - b));
        break;
    default:
        printf("Nothing Matched");
    }
    return 0;
}
