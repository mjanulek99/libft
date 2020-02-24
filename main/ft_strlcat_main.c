#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    size_t max = 3;
    char src[100] = "01234567890";
    char dest_a[100] = "0000";
    char dest_b[100] = "0000";


    ft_strlcat(dest_a, src, 3);
    strncat(dest_b, src, 3);
    db_m_print(dest_a, "-str -l $ft_strlcat : ");
    db_m_print(dest_b, "-str -l $std strncat : ");

    
}