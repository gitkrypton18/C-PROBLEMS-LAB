// program to get reverse of a given number
#include <stdio.h>
int main()
{
    int num, temp, rev = 0;
    printf("enter the number to be reversed");
    scanf("%d", &num);
    while (num != 0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }
    printf("the reversed number is  %d\n", rev);

    return 0;
}