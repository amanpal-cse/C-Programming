#include <stdio.h>

int main()
{
    int day, month, year, maxDays;

    printf("Enter day, month and year: ");
    scanf("%d %d %d", &day, &month, &year);

    if (year < 1 || month < 1 || month > 12)
    {
        printf("Invalid Date");
        return 0;
    }

    if (month == 2)
    {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            maxDays = 29;
        else
            maxDays = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        maxDays = 30;
    }
    else
    {
        maxDays = 31;
    }

    if (day >= 1 && day <= maxDays)
        printf("Correct Date");
    else
        printf("Invalid Date");

    return 0;
}