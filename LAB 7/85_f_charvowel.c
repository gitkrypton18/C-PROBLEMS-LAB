// WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT
#include <stdio.h>
int Checker(int a)
{
    int check = 0;
    int arrvowel[10] = {65, 97, 69, 101, 73, 105, 79, 111, 85, 117};

    for (int i = 0; i < 10; i++)
    {
        if (a == arrvowel[i])
        {
            check++;
        }
    }
    if (check > 0)
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}
int main()
{
    char a;
    printf("Enter the character\n");
    scanf("%c", &a);
    int x = a;
    Checker(x);
}