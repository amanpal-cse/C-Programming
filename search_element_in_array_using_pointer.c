#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int *p = a;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (*(p + i) == key)
        {
            printf("Element found at position %d\n", i + 1);
            return 0;
        }
    }

    printf("Element not found\n");

    return 0;
}