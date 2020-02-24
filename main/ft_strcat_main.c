#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char src[100] = "";
    char dest[100] = "111";
    char src0[100] = "";
    char dest0[100] = "111";
    int i;

    i = 0;

    fprintf(stderr, "src\t\t:%s\n", ft_strcat(dest, src));
    fprintf(stderr, "orig\t\t:%s\n", strcat(dest0, src0));
}