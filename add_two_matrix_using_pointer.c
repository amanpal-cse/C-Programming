#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;
    int *p, *q, *r;

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    p = &a[0][0];
    q = &b[0][0];
    r = &c[0][0];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(r + i * 3 + j) =
                *(p + i * 3 + j) + *(q + i * 3 + j);
        }
    }
    printf("Sum of matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}