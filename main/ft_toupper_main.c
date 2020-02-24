#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int oj;
    int oi;
    int i = -1;

    while (i < 550)
    {
        oi = toupper(i);
        oj = ft_toupper(i);
        if (oi != oj)
        {
        db_m_print(&i, "-int -l $i : ");
        db_m_print(&oj, "-int -l $ft_to_upper : ");
        db_m_print(&oi, "-int -l $to_upper : ");
        db_m_print("", "");
        }
        i++;
    }




}