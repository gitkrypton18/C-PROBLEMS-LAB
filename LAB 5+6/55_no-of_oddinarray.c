// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND TOTAL NO. OF EVERY
int main()
{

    int n = 10, arr[n], even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        printf("enter the array elements\n");
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
    }
    printf("the no of even of array elements is %d\n", even);
    printf("the no of odd of array elements is %d\n", odd);

    return 0;
}