#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, pos = -1;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to remove: ");
    scanf("%c", &ch);

    // Find first occurrence
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            pos = i;
            break;
        }
    }

    // Remove character
    if(pos != -1)
    {
        for(i = pos; str[i] != '\0'; i++)
        {
            str[i] = str[i + 1];
        }

        printf("String after removing first occurrence: %s", str);
    }
    else
    {
        printf("Character not found.");
    }

    return 0;
}