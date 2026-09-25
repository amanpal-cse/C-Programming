#include <stdio.h>

void evenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    evenOdd(num);

    return 0;
}