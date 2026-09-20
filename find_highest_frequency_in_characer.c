#include <stdio.h>

int main()
{
    char str[100];
    int frequency[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        frequency[(unsigned char)str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(frequency[(unsigned char)str[i]] > max)
        {
            max = frequency[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Highest frequency character = %c\n", maxChar);
    printf("Frequency = %d", max);

    return 0;
}