#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;
    int space = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] == ' ') {
            if (space == 0) {
                str[j++] = ' ';
                space = 1;
            }
        }
        else if (str[i] == '\n') {
            break;
        }
        else {
            str[j++] = str[i];
            space = 0;
        }
    }

    if (j > 0 && str[j - 1] == ' ')
        j--;

    str[j] = '\0';

    printf("After removing extra spaces: \"%s\"", str);

    return 0;
}