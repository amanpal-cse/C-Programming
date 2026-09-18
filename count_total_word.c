#include <stdio.h>

int main()
{
    char str[100];
    int i, words = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && (i == 0 || str[i-1] == ' '))
        {
            words++;
        }
    }

    printf("Total number of words = %d", words);

    return 0;
}