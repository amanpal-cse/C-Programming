#include <stdio.h>

int main()
{
    int n, sum, digit;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n >= 10)
    {
        sum = 0;
        while (n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }
        n = sum;
    }
    printf("Generic Root = %d", n);
    return 0;
}