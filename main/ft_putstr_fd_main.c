#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main ()
{
    int fd;

    fd = open("testfile", O_WRONLY | O_CREAT, S_IRUSR | S_IRGRP | S_IROTH, S_IWUSR);
    ft_putstr_fd("cesi est un stringue rose", fd);
    close(fd);
}