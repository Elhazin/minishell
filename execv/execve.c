#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(int ac , char *av[])
{
    int fd[ac - 2][2];
    int i = 0;
    while (i < (fd- 2))
    {
        pipe(fd[i]);
        i++;
    }
    

}