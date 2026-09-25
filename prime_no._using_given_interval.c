#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

void primeBetween(int start, int end)
{
    int i;

    printf("Prime numbers are: ");

    for (i = start; i <= end; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }
}

int main()
{
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    primeBetween(start, end);

    return 0;
}