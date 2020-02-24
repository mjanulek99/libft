/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 17:08:58 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char		*ft_strchr(const char *s, int c)
{
	unsigned char		*temp;
	unsigned char		temp_c;

	temp = (unsigned char *)s;
	temp_c = (unsigned char)c;
	while (*temp)
	{
		if (*temp == temp_c)
			return ((char *)temp);
		temp++;
	}
	if (*temp == temp_c)
		return ((char *)temp);
	return (NULL);
}
