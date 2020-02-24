#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char    fonction(unsigned int i, char c)
{
    c = c + i;
    return c;
}

int main ()
{
    int fd;

    fd = open("testfile", O_WRONLY | O_CREAT, S_IRUSR | S_IRGRP | S_IROTH, S_IWUSR);
    ft_putchar_fd('c', fd);
    close(fd);
}