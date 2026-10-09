#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int n, result;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    printf("Enter number of characters to compare: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid number of characters");
        return 0;
    }

    result = strncmp(str1, str2, (size_t)n);

    if (result == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}