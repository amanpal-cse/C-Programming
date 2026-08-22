#include <stdio.h>

int main()
{
    int n, choice;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
        choice = 1;
    else if (n < 0)
        choice = 2;
    else
        choice = 3;
    switch(choice)
    {
        case 1:
            printf("Positive Number");
            break;

        case 2:
            printf("Negative Number");
            break;

        case 3:
            printf("Zero");
            break;
    }
    return 0;
}