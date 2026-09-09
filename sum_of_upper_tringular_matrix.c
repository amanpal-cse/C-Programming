#include <stdio.h>

int main() {
    int a[10][10], n, i, j, sum = 0;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of Upper Triangular Matrix = %d\n", sum);

    return 0;
}