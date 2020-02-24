#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char s1[100] = "01234567890\n";
    char *rst;
    rst = ft_substr(s1, 3, 3);
    db_m_print(rst, "-str");
}