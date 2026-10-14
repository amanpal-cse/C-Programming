#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;
    int *p = &a[0][0];
    int *q = &b[0][0];
    int *r = &c[0][0];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", p + i * 3 + j);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", q + i * 3 + j);
        }
    }

    for (i = 0; i < 9; i++)
    {
        *(r + i) = *(p + i) + *(q + i);
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(r + i * 3 + j));
        }
        printf("\n");
    }

    return 0;
}