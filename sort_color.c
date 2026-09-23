#include <stdio.h>

int main() {
    int a[] = {2, 0, 2, 1, 1, 0};
    int n = 6;
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}