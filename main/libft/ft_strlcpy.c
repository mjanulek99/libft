/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 16:50:05 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dest;
	size_t			i;

	i = 0;
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	while (temp_src[i] && i < size - 1)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	temp_dest[i] = 0;
	return (ft_strlen(src));
}
