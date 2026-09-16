#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter lowercase string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase string: %s", str);

    return 0;
}