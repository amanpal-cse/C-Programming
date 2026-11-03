#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char *p, *q;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    p = str1;
    q = str2;

    while(*p == *q && *p != '\0')
    {
        p++;
        q++;
    }

    if(*p == *q)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}