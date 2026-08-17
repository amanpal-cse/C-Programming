#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
        n = -n;

    while (n >= 10)
    {
        sum = 0;
        while (n != 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        n = sum;
    }
    printf("Digital Root = %d", n);
    return 0;
}