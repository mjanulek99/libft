#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char src[100] = "01234567890";
    char dest[100];
    char dest_orig[100];
    void *temp;
    void *temp_orig;
    size_t n = 200;

    ft_bzero(dest, 100);
    ft_bzero(dest_orig, 100);
    temp = ft_memcpy(dest, src, n);
    // temp_orig = memcpy(dest_orig, src, n);
    fprintf(stderr, "dest \t\t: %s\n", dest);
    // fprintf(stderr, "dest_orig \t\t: %s\n", dest_orig);
    fprintf(stderr, "temp \t\t: %s\n", temp);
    // fprintf(stderr, "temp_orig \t\t: %s\n", temp_orig);


}