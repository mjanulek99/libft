#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main ()
{
    char *rst;
    db_m_print(ft_itoa(-10), "-str -l $itoa : ");
    db_m_print(ft_itoa(0), "-str -l $itoa : ");
    db_m_print(ft_itoa(INT_MIN), "-str -l $itoa : ");
    db_m_print(ft_itoa(INT_MAX), "-str -l $itoa : ");
    db_m_print(ft_itoa((int)NULL), "-str -l $itoa : ");

}