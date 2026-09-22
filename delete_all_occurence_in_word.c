#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    char *pos;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter word to delete: ");
    scanf("%s", word);

    while ((pos = strstr(str, word)) != NULL) {
        memmove(pos, pos + strlen(word),
                strlen(pos + strlen(word)) + 1);
    }

    printf("String after deletion: %s", str);

    return 0;
}