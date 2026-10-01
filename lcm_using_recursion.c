#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("LCM = %d\n", lcm(a, b));

    return 0;
}
