#include <stdio.h>

int main()
{
    char str[100], ch;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to search: ");
    scanf("%c", &ch);

    printf("Character found at positions: ");

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("%d ", i);
        }
    }

    return 0;
}