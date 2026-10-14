#include <stdio.h>

int main()
{
    int a[3][3], i, j;
    int *p = &a[0][0];

    printf("Enter 9 elements:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", p + i * 3 + j);
        }
    }

    printf("Matrix is:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(p + i * 3 + j));
        }
        printf("\n");
    }

    return 0;
}