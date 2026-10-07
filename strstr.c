#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I love programming";
    char sub[] = "program";

    if (strstr(str, sub) != NULL)
        printf("Substring found");
    else
        printf("Substring not found");

    return 0;
}
