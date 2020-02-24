/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 17:11:02 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr_lst;
	t_list	*ptr_new;

	if (lst && f && del)
	{
		if (!(ptr_lst = ft_lstnew(f(lst->content))))
			return (NULL);
		lst = lst->next;
		while (lst)
		{
			if (!(ptr_new = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&ptr_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&ptr_lst, ptr_new);
			lst = lst->next;
		}
		return (ptr_lst);
	}
	return (NULL);
}
