// program to check max of three by conditionls ? :
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three numbers\n ");
    scanf("%d %d %d", &a, &b, &c);
    a > b &&a > c ? printf(" a is gretest") : b > c &&b > a ? printf("b is grestest")
                                          : c > a &&c > b   ? printf("c is greetst")
                                                            : printf("null");
}
