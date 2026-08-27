#include <stdio.h>

int max(int a[], int n)
{
    if (n == 1)
        return a[0];

    int m = max(a, n - 1);

    if (a[n - 1] > m)
        return a[n - 1];
    else
        return m;
}

int min(int a[], int n)
{
    if (n == 1)
        return a[0];

    int m = min(a, n - 1);

    if (a[n - 1] < m)
        return a[n - 1];
    else
        return m;
}

int main()
{
    int a[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Maximum = %d\n", max(a, n));
    printf("Minimum = %d\n", min(a, n));

    return 0;
}