#include <stdio.h>

int main()
{
    char oldname[50], newname[50];
    printf("Enter old file name: ");
    scanf("%49s", oldname);
    printf("Enter new file name: ");
    scanf("%49s", newname);
    if (rename(oldname, newname) == 0)
    {
        printf("File renamed successfully.");
    }
    else
    {
        printf("Unable to rename file.");
    }
    return 0;
}