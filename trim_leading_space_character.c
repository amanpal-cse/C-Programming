#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] == ' ' || str[i] == '\t') {
        i++;
    }

    memmove(str, str + i, strlen(str + i) + 1);

    printf("After removing leading spaces: %s", str);

    return 0;
}