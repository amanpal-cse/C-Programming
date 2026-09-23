#include <stdio.h>

int main() {
    int nums[] = {5, 2, 3, 1};
    int n = 4;
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                nums[j] = nums[j] + nums[j + 1];
                nums[j + 1] = nums[j] - nums[j + 1];
                nums[j] = nums[j] - nums[j + 1];
            }
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", nums[i]);

    return 0;
}