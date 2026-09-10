#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, sum = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of lower triangular matrix = %d", sum);

    return 0;
}