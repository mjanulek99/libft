#include "debug.h"
#include "libft/libft.h"

int main ()
{
    char str[11] = "0123456789";
    char str0[11] = "0123456789";
    int i;

    i = 20;

    // ft_bzero(str, i);
    bzero(str0, i);

    // db_m_print(str, "-char -l 10 $ft_bzero :\t");
    // db_m_print(str0, "-char -l 10 $bzero :\t\t");

}
