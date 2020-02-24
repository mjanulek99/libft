#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    const char src[100] = "cesi est un stringue";
    int c = 0;

    fprintf(stderr, "src\t\t:%s\n", ft_strchr(src, c));
    fprintf(stderr, "orig\t\t:%s\n", strchr(src, c));
}