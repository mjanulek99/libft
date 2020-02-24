/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 16:54:29 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char			*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (n != 0)
	{
		while (src[i] && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
			dest[i++] = 0;
	}
	return (dest);
}
