#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, position = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        printf("First occurrence at index: %d", position);
    else
        printf("Character not found");

    return 0;
}