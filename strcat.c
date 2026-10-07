#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "Hello ";
    char str2[] = "World";

    strncat(str1, str2, 3);

    printf("%s", str1);

    return 0;
}
