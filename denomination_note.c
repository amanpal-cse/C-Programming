#include <stdio.h>

int main()
{
    int amount, notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int i, count;
    printf("Enter amount: ");
    scanf("%d", &amount);
    for (i = 0; i < 10; i++)
    {
        count = amount / notes[i];

        if (count > 0)
        {
            printf("%d x %d\n", notes[i], count);
            amount = amount % notes[i];
        }
    }
    return 0;
}