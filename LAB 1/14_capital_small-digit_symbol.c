// program to check whether a entered thing is upper,lower,symbol,digit
#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter any char or symbol\n");
    scanf("%c", &alpha);
    if (alpha >= 33 && alpha <= 47)
    {
        printf("Given is a special symbol");
    }
    else if (alpha >= 48 && alpha <= 57)
    {
        printf("Given is a digit");
    }
    else if (alpha >= 58 && alpha <= 64)
    {
        printf("Given is a special symbol marks");
    }
    else if (alpha >= 65 && alpha <= 90)
    {
        printf("Given is a uppercase");
    }
    else if (alpha >= 91 && alpha <= 96)
    {
        printf("Given is a shift symbols");
    }
    else if (alpha >= 97 && alpha <= 122)
    {
        printf("Given is a lowercase");
    }
    else if (alpha >= 122)
    {
        printf("Given is a bracces or a symbol");
    }

    return 0;
}