#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char s1[100] = "1235";
    char s2[100] = "1234";

    int delta;
    int delta0;



    delta = ft_strncmp(s1, s2, 20);
    delta0 = strncmp(s1, s2, 20);
    fprintf(stderr, "delta = \t: %d\n", delta);
    fprintf(stderr, "delta0 = \t: %d\n", delta0);
}