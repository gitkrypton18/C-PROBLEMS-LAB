// program to print the first n fibonaci numbers using functions 0 1 1 2 3 5 8
#include <stdio.h>
void Fibo(int n)
{sum=0;
    

    for (int i = 0; i <= n; i += i)
    {
        sum+=i;
        
        printf("%d \t", i);
    }
}
int main()
{
    int a;

    printf("enter upto");
    scanf("%d", &a);
    Fibo(a);
}