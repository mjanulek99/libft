#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    t_list *l_1;
    t_list *l_2;
    t_list *first;
    t_list *last;
    int count;

    l_1 = ft_lstnew("1");
    l_2 = ft_lstnew("2");
    
    first = l_1;
    ft_lstadd_front(&first, l_2);
    count = ft_lstsize(first);
    last = ft_lstlast(first);
    db_m_print(first->content, "-str -l $first->content : ");
    db_m_print(last->content, "-str -l $last->content : ");
}