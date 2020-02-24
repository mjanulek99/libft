#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char s1[100] = "1231";
    char s2[100] = "1231";

    size_t n = 6;

    int temp = ft_memcmp(s1, s2, n);
    int temp_orig = memcmp(s1, s2, n);

    fprintf(stderr, "temp \t\t: %d\n", temp);
    fprintf(stderr, "temp_orig \t: %d\n", temp_orig);
}