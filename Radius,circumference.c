#include <stdio.h>

int main()
{
    float r, h, result;
    int choice;
    float pi = 3.14;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter height: ");
    scanf("%f", &h);
    printf("\n1. Circumference");
    printf("\n2. Volume");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            result = 2 * pi * r;
            printf("Circumference = %.2f", result);
            break;
        case 2:
            result = pi * r * r * h;
            printf("Volume = %.2f", result);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}