#include <stdio.h>

void display(int arr[], int n)
{
    if (n == 0)
        return;

    printf("%d ", arr[0]);
    display(arr + 1, n - 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Array elements: ");
    display(arr, n);

    return 0;
}
