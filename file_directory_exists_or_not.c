#include <stdio.h>
#include <sys/stat.h>

int main()
{
    char path[100];
    struct stat s;
    printf("Enter file or directory name: ");
    scanf("%99s", path);
    if (stat(path, &s) == 0)
    {
        if (S_ISDIR(s.st_mode))
            printf("Directory exists.");
        else
            printf("File exists.");
    }
    else
    {
        printf("File or directory does not exist.");
    }
    return 0;
}