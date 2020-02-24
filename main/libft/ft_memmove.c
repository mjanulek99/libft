/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 17:06:04 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void			*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char		*temp_src;
	unsigned char		*temp_dest;
	unsigned long long	temp;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	temp = (unsigned long long)dest;
	if (dest < src)
		ft_memcpy(temp_dest, temp_src, n);
	else if (dest > src)
	{
		while (n-- > 0)
			temp_dest[n] = temp_src[n];
	}
	return ((void *)temp);
}
