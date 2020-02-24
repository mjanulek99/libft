#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char    fonction(unsigned int i, char c)
{
    c = c + i;
    return c;
}

int main ()
{
    char (*f)(unsigned int i, char) = &fonction;
    char *rst;
    char str[100] = "AAAA";
    // rst = ft_itoa(123)
    rst = ft_strmapi(str, f);
    db_m_print(rst, "-str -l $strmapi : ");

}