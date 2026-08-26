#include <stdio.h>

void printArray(int arr[], int n, int i)
{
    if (i == n)
        return;

    printf("%d ", arr[i]);

    printArray(arr, n, i + 1);
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    printArray(arr, n, 0);

    return 0;
}