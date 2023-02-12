#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
int main()
{
    char *str[] = {"cat", "execves.c", "main.c", NULL};
    execve("/bin/cat", str, NULL);
}