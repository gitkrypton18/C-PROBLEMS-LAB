// PowerFunction
int Power(int number, int exp)
{
    int power = 1;
    for (int i = 1; i <= exp; i++)
    {
        power = power * number;
    }
    return power;
}
