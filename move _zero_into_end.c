#include <stdio.h>

int main() {
    int a[] = {0, 1, 0, 3, 12};
    int n = 5;
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (a[j] == 0 && a[j + 1] != 0) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Result: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}