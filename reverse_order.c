#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, end, start;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    end = strlen(str) - 1;

    printf("Reverse order: ");

    for (i = end; i >= 0; i--)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            start = i;

            while (str[start] != '\0' && str[start] != ' ')
            {
                printf("%c", str[start]);
                start++;
            }

            printf(" ");
        }
    }

    return 0;
} 