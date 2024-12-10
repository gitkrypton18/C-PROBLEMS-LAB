// to check whether a given number is palindrome or not
#include <stdio.h>
int main()
{
    int num, temp, rev = 0;
    printf("enter the number to check ");
    scanf("%d", &num);
    int rem = num;
    while (num != 0)
    {
        temp = num % 10;

        rev = rev * 10 + temp;
        num /= 10;
    }
    if (rem == rev)
    {
        printf("number is palindrome");
    }
    else if (rev != rem)
    {
        printf("number is not a palindrome");
    }

    return 0;
}