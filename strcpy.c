#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello World";
    char dest[20];

    strncpy(dest, src, 5);
    dest[5] = '\0';

    printf("%s", dest);

    return 0;
}