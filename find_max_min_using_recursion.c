#include <stdio.h>

int maximum(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    int max = maximum(arr + 1, n - 1);

    return (arr[0] > max) ? arr[0] : max;
}

int minimum(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    int min = minimum(arr + 1, n - 1);

    return (arr[0] < min) ? arr[0] : min;
}

int main()
{
    int arr[] = {25, 10, 45, 5, 30};
    int n = 5;

    printf("Maximum = %d\n", maximum(arr, n));
    printf("Minimum = %d\n", minimum(arr, n));

    return 0;
}
