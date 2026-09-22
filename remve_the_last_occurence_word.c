#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    char *pos, *last = NULL;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter word to remove: ");
    scanf("%s", word);

    pos = strstr(str, word);

    while (pos != NULL) {
        last = pos;
        pos = strstr(pos + 1, word);
    }

    if (last != NULL) {
        memmove(last, last + strlen(word),
                strlen(last + strlen(word)) + 1);
    }

    printf("String after removal: %s", str);

    return 0;
}