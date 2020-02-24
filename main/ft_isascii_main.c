#include <stdlib.h>
#include <stdio.h>
#include "debug.h"
#include "libft/libft.h"

int main ()
{
    int oj;
    int oi;
    int i = -1;

    while (i < 550)
    {
        oi = isascii(i);
        oj = ft_isascii(i);
        if (oi != oj)
        {
        db_m_print(&i, "-int -l $i : ");
        db_m_print(&oj, "-int -l $ft_isascii : ");
        db_m_print(&oi, "-int -l $isascii : ");
        db_m_print("", "");
        }
        i++;
    }




}