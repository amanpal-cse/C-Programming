#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int zero = 0, nonzero = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);

            if(a[i][j] == 0)
                zero++;
            else
                nonzero++;
        }
    }

    if(zero > nonzero)
        printf("It is a Sparse Matrix.");
    else
        printf("It is not a Sparse Matrix.");

    return 0;
}