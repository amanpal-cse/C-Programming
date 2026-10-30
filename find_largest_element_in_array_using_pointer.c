#include <stdio.h>

int main()
{
    int a[5], *p, max;
    printf("Enter 5 elements: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    p = a;
    max = *p;
    for(int i = 1; i < 5; i++)
    {
        if(*(p + i) > max)
        {
            max = *(p + i);
        }
    }
    printf("Largest element = %d", max);
    return 0;
}