#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a, temp;
    int i;

    for (i = 0; i < 5 / 2; i++) {
        temp = *(p + i);
        *(p + i) = *(p + 4 - i);
        *(p + 4 - i) = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}