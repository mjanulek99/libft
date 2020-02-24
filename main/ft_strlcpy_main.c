#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char src[100] = "01234567890";
    char dest[100];
    void *temp;
    int i;

    i = 0;

    // temp = malloc(sizeof(void *));

    ft_bzero(dest, 100);
    temp = ft_strlcpy(dest, src, 6);
    db_m_print(dest, "-str");
}