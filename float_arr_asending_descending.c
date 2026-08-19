#include <stdio.h>

int main()
{
    float a[5], temp;
    int i, j;

    printf("Enter 5 float numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%f", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nAscending Order:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%.2f ", a[i]);
    }
    printf("\n\nDescending Order:\n");
    for(i = 4; i >= 0; i--)
    {
        printf("%.2f ", a[i]);
    }

    return 0;
}