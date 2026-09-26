#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

int isStrong(int n)
{
    int temp = n;
    int sum = 0;
    int digit;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + factorial(digit);
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

    printf("Strong numbers are: ");

    for(int i = start; i <= end; i++)
    {
        if(isStrong(i))
            printf("%d ", i);
    }

    return 0;
}