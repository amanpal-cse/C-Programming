#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, r1, r2;
    int choice;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0)
        choice = 1;
    else if (D == 0)
        choice = 2;
    else
        choice = 3;

    switch (choice)
    {
        case 1:
            r1 = (-b + sqrt(D)) / (2 * a);
            r2 = (-b - sqrt(D)) / (2 * a);
            printf("Roots are: %.2f and %.2f", r1, r2);
            break;

        case 2:
            r1 = -b / (2 * a);
            printf("Both roots are: %.2f", r1);
            break;

        case 3:
            printf("Roots are imaginary.");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}