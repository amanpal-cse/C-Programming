#include <stdio.h>

int sumEven(int start, int end)
{
    if (start > end)
        return 0;
    if (start % 2 == 0)
        return start + sumEven(start + 1, end);

    return sumEven(start + 1, end);
}

int sumOdd(int start, int end)
{
    if (start > end)
        return 0;
    if (start % 2 != 0)
        return start + sumOdd(start + 1, end);
    return sumOdd(start + 1, end);
}

int main()
{
    int start, end, choice;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Enter 1 for Even sum, 2 for Odd sum: ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Sum of even numbers = %d", sumEven(start, end));
    else
        printf("Sum of odd numbers = %d", sumOdd(start, end));
    return 0;
}
