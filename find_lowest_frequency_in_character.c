#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i, min = 999, minChar;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(freq[(unsigned char)str[i]] < min)
        {
            min = freq[(unsigned char)str[i]];
            minChar = str[i];
        }
    }

    printf("Lowest frequency character = %c", minChar);
    printf("\nFrequency = %d", min);

    return 0;
}