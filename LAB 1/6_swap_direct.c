// Program to swap two variables without using Third variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a and b :\n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the swapped value of a and b is \n%d,%d", a, b);

    return 0;
}
