/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 16:45:45 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char				*ft_strrchr(const char *s, int c)
{
	unsigned char		*temp;
	unsigned char		temp_c;
	size_t				i;

	temp = (unsigned char *)s;
	temp_c = (unsigned char)c;
	i = ft_strlen(s) + 1;
	while (i--)
	{
		if (temp[i] == temp_c)
			return ((char *)(temp + i));
	}
	return (NULL);
}
