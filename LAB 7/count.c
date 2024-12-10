
// function for counter
int Count(int number)
{
    int i = 1;
    while (number > 0)
    {
        number /= 10;
        i++;
    }
    return i;
}
//