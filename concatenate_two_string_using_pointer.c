#include <stdio.h>

int main()
{
    char str1[100], str2[50];
    char *p, *q;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%49s", str2);

    p = str1;
    q = str2;

    while(*p != '\0')
        p++;

    while(*q != '\0')
    {
        *p = *q;
        p++;
        q++;
    }

    *p = '\0';

    printf("Concatenated string = %s", str1);

    return 0;
}