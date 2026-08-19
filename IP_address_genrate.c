#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("192.168.1.%d\n", i);
    }

    return 0;
}