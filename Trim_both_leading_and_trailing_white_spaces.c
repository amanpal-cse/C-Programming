#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start = 0, end, i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    end = strlen(str) - 1;

    if (str[end] == '\n')
        str[end--] = '\0';
    while (str[start] == ' ')
        start++;
    while (end >= start && str[end] == ' ')
        end--;

    for (i = start; i <= end; i++)
        str[j++] = str[i];

    str[j] = '\0';

    printf("After trimming: \"%s\"", str);

    return 0;
}