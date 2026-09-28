#include <stdio.h>

void even(int start, int end)
{
    if (start > end)
        return;

    if (start % 2 == 0)
        printf("%d ", start);

    even(start + 1, end);
}

int main()
{
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Even numbers: ");
    even(start, end);

    return 0;
}