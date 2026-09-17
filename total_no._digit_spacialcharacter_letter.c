#include <stdio.h>

int main()
{
    char str[100];
    int i, alphabet = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphabet++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }

    printf("Total Alphabets = %d\n", alphabet);
    printf("Total Digits = %d\n", digit);
    printf("Total Special Characters = %d\n", special);

    return 0;
}