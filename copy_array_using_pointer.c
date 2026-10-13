#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int b[5];
    int *p = a, *q = b;
    int i;

    for (i = 0; i < 5; i++) {
        *(q + i) = *(p + i);
    }

    printf("Copied array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(q + i));
    }

    return 0;
}