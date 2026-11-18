#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
void listFiles(char path[])
{
    DIR *dir;
    struct dirent *entry;
    struct stat s;
    char newpath[500];
    dir = opendir(path);
    if (dir == NULL)
        return;
    while ((entry = readdir(dir)) != NULL)
    {
        if (strcmp(entry->d_name, ".") == 0 ||
            strcmp(entry->d_name, "..") == 0)
            continue;
        snprintf(newpath, sizeof(newpath),
                 "%s/%s", path, entry->d_name);
        printf("%s\n", newpath);
        if (stat(newpath, &s) == 0 && S_ISDIR(s.st_mode))
        {
            listFiles(newpath);
        }
    }
    closedir(dir);
}
int main()
{
    char path[100];
    printf("Enter directory name: ");
    scanf("%99s", path);
    listFiles(path);
    return 0;
}