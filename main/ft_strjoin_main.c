#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char s1[100] = "01234567890";
    char s2[100] = "abcdefgh";
    char *c1 = NULL;
    char *c2 = NULL;
    char *rst;
    rst = ft_strjoin(s1, s2);
    fprintf(stderr, "strjoin : %s\n", rst);
}