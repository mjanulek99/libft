/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 17:13:33 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dest;
	unsigned char	temp;
	size_t			i;

	i = 0;
	temp = (unsigned char)c;
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		if (temp_dest[i] == temp)
			return ((void *)(dest + i + 1));
		i++;
	}
	return (NULL);
}
