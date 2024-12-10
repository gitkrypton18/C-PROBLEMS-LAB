// functionn to swap two numbers
#include <stdio.h>
void Swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("the swapped values of x and y is %d and %d ", a, b);
}
int main()
{
    int x, y;

    printf("enter two numbers\n");
    scanf("%d %d", &x, &y);
    Swap(x, y);
}