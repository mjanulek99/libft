#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char str[100] = "cba0123456abc";
    char trim[100] = "abc";
    char *rst;
    rst = ft_strtrim(str, trim);
    db_m_print(rst, "-str");
}