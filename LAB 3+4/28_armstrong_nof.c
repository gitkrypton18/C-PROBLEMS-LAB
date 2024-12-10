// checking wheteher a num is armstrong or not without functions
#include <stdio.h>
int main()
{
    int num, counti = 0; // taking input number from user and initialising digit counter to 0
    printf("Enter any number: ");
    scanf("%d", &num);
    int original = num; // storing num into original to not lost it
    while (num > 0)// counter
    {
        num /= 10;
        counti++; // counting digits
    }
    num = original;
    printf("digits are %d\n", counti);

    int digit, sumofpower = 0, power;
    while (num > 0)
    {
        power = 1;
        digit = num % 10;
        // printf("%d", digit);
        for (int i = 0; i < counti; i++)
        {
            power *= digit;
            // printf("%d", power);
        }
        sumofpower += power;
        // printf("%d", sumofpower);
        num /= 10;
    }
    if (sumofpower == original)
    {
        printf("the given is an armstrong number");
    }
    else
    {
        printf("the given is not an armstrong number");
    }
}
