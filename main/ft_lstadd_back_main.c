#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

int main ()
{
    t_list *l_1;
    t_list *l_2;
    t_list *l_3;
    t_list *first;
    t_list *last;
    t_list *temp;
    int count;

    l_1 = ft_lstnew("1");
    l_2 = ft_lstnew("2");
    l_3 = ft_lstnew("3");

    
    first = l_2;
    ft_lstadd_front(&first, l_1);
    temp = first;
    count = ft_lstsize(first);
    ft_lstadd_back(&first, l_3);
    last = ft_lstlast(first);

    while (temp->next)
    {
        db_m_print(temp->content, "-str -l -v $list->content : ");
        temp = temp->next;
    }
    db_m_print(last->content, "-str -l -v $last->content : ");
}