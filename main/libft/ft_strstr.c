/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 16:44:19 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char			*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	offset;
	char	*rst;

	offset = 0;
	i = 0;
	rst = (char *)haystack;
	if (!*needle)
		return (rst);
	while (haystack[offset])
	{
		if (haystack[offset] == needle[i])
		{
			while (haystack[offset + i] && needle[i] == haystack[offset + i])
				i++;
			if (!needle[i])
				return ((char *)(rst + offset));
			i = 0;
		}
		offset++;
	}
	return (NULL);
}
