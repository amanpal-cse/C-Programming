#include <stdio.h>

int main()
{
    int a[10][10], result[10][10];
    int r, c, scalar, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter scalar value: ");
    scanf("%d", &scalar);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            result[i][j] = a[i][j] * scalar;
        }
    }

    printf("Scalar multiplication:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}