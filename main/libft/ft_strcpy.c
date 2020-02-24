/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 17:01:47 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char		*ft_strcpy(char *dest, const char *src)
{
	unsigned char		*temp_src;
	unsigned char		*temp_dest;
	unsigned long long	temp;

	temp = (unsigned long long)dest;
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	while (*temp_src)
		*(temp_dest++) = *(temp_src++);
	*temp_dest = 0;
	return ((char *)temp);
}
