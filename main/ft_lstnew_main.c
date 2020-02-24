#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    t_list *test;
    char str[100] = "cesi est un stringue rose bleute";

    test = ft_lstnew(str);
    db_m_print(test->content, "-str");
}