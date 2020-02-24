#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    t_list *l_1;
    t_list *l_2;
    t_list *first;

    l_1 = ft_lstnew("1");
    l_2 = ft_lstnew("2");
    
    first = l_1;
    ft_lstadd_front(&first, l_2);

    db_m_print(first->content, "-str");
}