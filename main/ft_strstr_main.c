#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    char needle[100] = "un";
    char haystack[100] = "cesi est un stringue rose";

    db_m_print(ft_strstr(haystack, needle), "-str");
}