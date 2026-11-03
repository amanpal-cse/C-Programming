#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j, k;
    int *p = &a[0][0];
    int *q = &b[0][0];
    int *r = &c[0][0];
    printf("Enter first matrix:\n");
    for(i=0; i<4; i++)
        scanf("%d", p+i);
    printf("Enter second matrix:\n");
    for(i=0; i<4; i++)
        scanf("%d", q+i);
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            *(r+i*2+j) = 0;
            for(k=0; k<2; k++)
                *(r+i*2+j) += *(p+i*2+k) * *(q+k*2+j);
        }
    }
    printf("Multiplication:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", *(r+i*2+j));
        printf("\n");
    }
    return 0;
}