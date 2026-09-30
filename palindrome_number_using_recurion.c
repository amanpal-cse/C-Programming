#include <stdio.h>

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + n % 10);
}

int main()
{
    int num, rev;

    printf("Enter a number: ");
    scanf("%d", &num);

    rev = reverse(num, 0);

    if (num == rev)
        printf("%d is a Palindrome number", num);
    else
        printf("%d is not a Palindrome number", num);

    return 0;
}
