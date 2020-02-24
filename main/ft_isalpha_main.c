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
        oi = isalpha(i);
        oj = ft_isalpha(i);
        if (oi != oj)
        {
        db_m_print(&i, "-int -l $i : ");
        db_m_print(&oj, "-int -l $ft_isalpha : ");
        db_m_print(&oi, "-int -l $isalpha : ");
        db_m_print("", "");
        }
        i++;
    }




}