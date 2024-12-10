#include <stdio.h>

// Function to count digits
int Count(int number)
{
    if (number == 0)
        return 1; // Handle the case for 0
    int count = 0;
    while (number > 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

// Power function
int Power(int number, int exp)
{
    int power = 1;
    for (int i = 0; i < exp; i++)
    { // Changed to start from 0
        power *= number;
    }
    return power;
}

// Extract and sum function
int extractAndSum(int number)
{
    int digit, sum = 0, count = Count(number);
    while (number > 0)
    {
        digit = number % 10;
        sum += Power(digit, count);
        number /= 10;
    }
    return sum;
}

// Main function
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if (extractAndSum(num) == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
