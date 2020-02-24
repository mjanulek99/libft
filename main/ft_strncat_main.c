#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char src[100] = "01234567890";
    char dest[100] = "0000";
    void *temp;
    int i;

    i = 0;


    debug_print_str(ft_strncat(dest, src, 3), 0);
    debug_print_str("\n", 0);
    
}