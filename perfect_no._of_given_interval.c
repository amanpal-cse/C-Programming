#include <stdio.h>

int isPerfect(int n)
{
    int sum = 0;

    for(int i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
            sum = sum + i;
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

    printf("Perfect numbers are: ");

    for(int i = start; i <= end; i++)
    {
        if(isPerfect(i))
            printf("%d ", i);
    }

    return 0;
}