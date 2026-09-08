#include <stdio.h>

int main()
{
    int a[10][10], r, c;
    int i, j, sum;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Row Sum
    for(i = 0; i < r; i++)
    {
        sum = 0;

        for(j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }

        printf("Sum of Row %d = %d\n", i + 1, sum);
    }

    // Column Sum
    for(j = 0; j < c; j++)
    {
        sum = 0;

        for(i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

    return 0;
}