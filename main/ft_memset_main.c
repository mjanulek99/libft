#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char src[100] = "";
    char src_orig[100] = "";
    int c = 'z';
    void *temp;
    void *temp_orig;
    size_t n = 200;

    temp = ft_memset(src, c, n);
    temp_orig = memset(src_orig, c, n);
    fprintf(stderr, "src \t\t: %s\n", src);
    fprintf(stderr, "src_orig \t: %s\n", src_orig);
    fprintf(stderr, "temp \t\t: %s\n", temp);
    fprintf(stderr, "temp_orig \t: %s\n", temp_orig);
}