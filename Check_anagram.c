#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int count[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if(strlen(str1) != strlen(str2))
    {
        flag = 0;
    }
    else
    {
        for(i = 0; str1[i] != '\0'; i++)
        {
            count[(unsigned char)str1[i]]++;
            count[(unsigned char)str2[i]]--;
        }

        for(i = 0; i < 256; i++)
        {
            if(count[i] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Strings are Anagrams");
    else
        printf("Strings are Not Anagrams");

    return 0;
}