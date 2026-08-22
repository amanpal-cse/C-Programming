#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        choice = 1;
    else if (b > a)
        choice = 2;
    else
        choice = 3;
    switch(choice)
    {
        case 1:
            printf("%d is maximum", a);
            break;

        case 2:
            printf("%d is maximum", b);
            break;

        case 3:
            printf("Both numbers are equal");
            break;
    }
    return 0;
}