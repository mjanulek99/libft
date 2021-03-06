#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

void ft_lstdelone_release(void *target)
{
    free((char *)target);
    target = NULL;
}

void ft_lstdelone_mallok(char **rst, int i)
{
    char temp;
    *rst = malloc(sizeof(char) * 2);
    temp = '0' + i;
    (*rst)[0] = temp;
    (*rst)[1] = 0;
}

void ft_lstchar(void *target)
{
    t_list *temp_t_list;
    char *temp_str;


    temp_t_list = (t_list *)target;
    temp_str = (char *)temp_t_list->content;
    temp_str[0] = temp_str[0] + 1;
}


void ft_lstprintout(t_list *temp)
{
       while (temp->next)
    {
        db_m_print(temp->content, "-str -l -v $list->content : ");
        temp = temp->next;
    }
    db_m_print(temp->content, "-str -l -v $last->content : ");
}

int main ()
{
    t_list *l_1;
    t_list *l_2;
    t_list *l_3;
    t_list *first;
    t_list *last;
    t_list *temp;
    int count;

    char *name_1;
    char *name_2;
    char *name_3;

    ft_lstdelone_mallok(&name_1, 1);
    ft_lstdelone_mallok(&name_2, 2);
    ft_lstdelone_mallok(&name_3, 3);



    l_1 = ft_lstnew(name_1);
    l_2 = ft_lstnew(name_2);
    l_3 = ft_lstnew(name_3);


    void (*f)(void *) = &ft_lstdelone_release;
    void (*f2)(void *) = &ft_lstchar;


    first = l_2;
    ft_lstadd_front(&first, l_1);
    temp = first;
    count = ft_lstsize(first);
    ft_lstadd_back(&first, l_3);
    last = ft_lstlast(first);
    ft_lstprintout(first);
    ft_lstiter(first, f2);
    ft_lstprintout(first);
}