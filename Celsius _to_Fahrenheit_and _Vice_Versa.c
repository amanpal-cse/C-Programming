#include <stdio.h>

int main()
{
    float c, f;
    int choice;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter Celsius: ");
        scanf("%f", &c);

        f = (c * 9 / 5) + 32;

        printf("Fahrenheit = %.2f", f);
    }
    else if(choice == 2)
    {
        printf("Enter Fahrenheit: ");
        scanf("%f", &f);

        c = (f - 32) * 5 / 9;

        printf("Celsius = %.2f", c);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}