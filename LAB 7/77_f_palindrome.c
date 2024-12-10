// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
#include <stdio.h>
void Palinda(int a)
{
    int rev = 0, temp;
    int rem = a;
    while (a != 0)
    {
        temp = a % 10;

        rev = rev * 10 + temp;
        a /= 10;
    }
    if (rem == rev)
    {
        printf("number is palindrome");
    }
    else if (rev != rem)
    {
        printf("number is not a palindrome");
    }
}
int main()
{
    int num;

    printf("Enter the number to be checked the palindrome");
    scanf("%d", &num);
    Palinda(num);
}