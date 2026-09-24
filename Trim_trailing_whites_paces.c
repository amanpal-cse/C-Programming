#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    i = strlen(str) - 1;
    if (str[i] == '\n')
        str[i--] = '\0';

    while (i >= 0 && str[i] == ' ') {
        str[i] = '\0';
        i--;
    }

    printf("After trimming trailing spaces: \"%s\"", str);

    return 0;
}