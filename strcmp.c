#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Aman";
    char str2[] = "aman";

    if (stricmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
