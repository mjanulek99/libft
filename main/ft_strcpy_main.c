#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char src[100] = "01234567890";
    char dest[100];
    void *temp;
    int i;

    i = 0;

    // temp = malloc(sizeof(void *));

    ft_bzero(dest, 100);
    temp = ft_strcpy(dest, src);
    debug_print_str(temp, 0);
    debug_print_str("\n", 0);
}