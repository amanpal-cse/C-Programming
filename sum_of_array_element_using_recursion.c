#include <stdio.h>

int sum(int arr[], int n)
{
    if (n == 0)
        return 0;

    return arr[0] + sum(arr + 1, n - 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Sum = %d", sum(arr, n));

    return 0;
}
