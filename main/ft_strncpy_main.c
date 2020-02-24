#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char src[100] = "";
    char dest[100];
    char dest0[100];
    void *temp;
    void *temp0;
    int i;

    i = 0;


    ft_memset(dest, 0, 100);
    ft_memset(dest, '0', 99);
    ft_memset(dest0, 0, 100);
    ft_memset(dest0, '0', 99);
    temp = ft_strncpy(dest, src, 100);
    temp0 = ft_strncpy(dest0, src, 100);
    fprintf(stderr, "temp \t: %s\n", temp);
    fprintf(stderr, "temp0 \t: %s\n", temp0);
}