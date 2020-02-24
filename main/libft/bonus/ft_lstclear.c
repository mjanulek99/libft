/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 14:55:58 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp_a;
	t_list *temp_b;

	if (!lst || !del || !*lst)
		return ;
	temp_a = *lst;
	temp_b = temp_a;
	*lst = NULL;
	while (temp_a->next)
	{
		temp_b = temp_a->next;
		ft_lstdelone(temp_a, del);
		temp_a = temp_b;
	}
	ft_lstdelone(temp_a, del);
}
