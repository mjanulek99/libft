/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 17:10:04 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void			*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char			*temp_src;
	unsigned char			*temp_dest;
	unsigned long long		temp;

	temp = (unsigned long long)dest;
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	if (!dest && !src && n)
		return (NULL);
	if (n > 0)
	{
		while (n-- > 0)
			*(temp_dest++) = *(temp_src++);
	}
	return ((void *)temp);
}
