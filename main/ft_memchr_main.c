#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char src[100] = "01234567890";
    char *temp;
    char *temp_orig;
    int i;
    const char c = 'z';
    size_t n = 5;
    i = 0;

    // temp = malloc(sizeof(void *));

    temp = ft_memchr(src, c, n);
    temp_orig = ft_memchr(src, c, n);
    fprintf(stderr, "temp =  \t%s\n", temp);
    fprintf(stderr, "temp_orig =  \t%s\n", temp_orig);
}