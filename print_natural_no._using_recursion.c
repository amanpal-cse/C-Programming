#include <stdio.h>

void natural(int n)
{
    if (n == 0)
        return;

    natural(n - 1);

    printf("%d ", n);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    natural(n);

    return 0;
}