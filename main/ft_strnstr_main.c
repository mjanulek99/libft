#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
# include <stdio.h>
# include <stdint.h>

int main ()
{
    char	*s1 = "MZIRIBMZIRIBMZE123";
    char	*s2 = "MZIRIBMZE";
    size_t	max = 0;

    char	*i1 = strnstr(s1, s2, max);
    char	*i2 = ft_strnstr(s1, s2, max);

    db_m_print(i1, " -l-v $orig:");
    db_m_print(i2, " -l-v $orig:");
}