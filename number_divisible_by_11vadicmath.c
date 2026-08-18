#include <stdio.h>

int main()
{
    int n, digit, sum1 = 0, sum2 = 0, position = 1, diff;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        if (position % 2 == 1)
            sum1 = sum1 + digit;
        else
            sum2 = sum2 + digit;
        n = n / 10;
        position++;
    }
    diff = sum1 - sum2;
    if (diff < 0)
        diff = -diff;
    if (diff % 11 == 0)
        printf("Number is divisible by 11");
    else
        printf("Number is not divisible by 11");
    return 0;
}