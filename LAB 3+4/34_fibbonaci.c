// Program to print Fibonacci series 0,1,1,2,3,5,8,...
#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 1, n, temp;
    printf("Enter number of elements : "); // declare the upto which you are required
    scanf("%d", &n);
    printf("%d\t%d\t", num1, num2);
    for (int i = 3; i <= n; i++) // for loop to increment the value of num 2 by adding its previous num1
    {
        temp = num2;
        printf("%d\t", num1 + num2);
        num2 += num1;
        num1 = temp;
    }
}