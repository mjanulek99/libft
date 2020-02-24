#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char src[100] = "";
    char *dest = malloc(sizeof(char) * 100);
    char *dest_orig = malloc(sizeof(char) * 100);
    char *rst;
    char *rst_orig;

    size_t n = 11;
    char c = 'i';
    

    // temp = malloc(sizeof(void *));

    ft_bzero(dest, 100);
    ft_bzero(dest_orig, 100);
    rst = ft_memccpy(dest, src, c, n);
    rst_orig = memccpy(dest_orig, src, c, n);
    fprintf(stderr, "dest \t\t: %s\n", dest);
    fprintf(stderr, "&dest \t\t: %p\n", dest);
    fprintf(stderr, "rst \t\t: %s\n", rst);
    fprintf(stderr, "&rst \t\t: %p\n", rst);
    fprintf(stderr, "dest_orig \t: %s\n", dest_orig);
    fprintf(stderr, "&dest_orig \t: %p\n", dest_orig);
    fprintf(stderr, "rst_orig \t: %s\n", rst_orig);
    fprintf(stderr, "&rst_orig \t: %p\n", rst_orig);
}