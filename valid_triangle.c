#include <stdio.h>

int main()
{
    int a, b, c, sum;

    printf("Enter three angles of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    if(a > 0 && b > 0 && c > 0 && sum == 180)
    {
        printf("Triangle is Valid");
    }
    else
    {
        printf("Triangle is Not Valid");
    }

    return 0;
}