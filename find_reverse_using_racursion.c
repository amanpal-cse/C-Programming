#include <stdio.h>

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;
    else
        return reverse(n / 10, rev * 10 + n % 10);
}
int main()
{
    int n, result;
    printf("\t1Enter a number: ");
    scanf("%d", &n);

    result = reverse(n, 0);

    printf("Reverse = %d\n", result);

    return 0;
}
