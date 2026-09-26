#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;

    for(int i = 1; i <= exp; i++)
        result = result * base;

    return result;
}

int countDigits(int n)
{
    int count = 0;

    while(n > 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int isArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    int digit;
    int digits = countDigits(n);

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + power(digit, digits);
        temp = temp / 10;
    }

    return sum == n;
}

int main()
{
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are: ");

    for(int i = start; i <= end; i++)
    {
        if(isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}