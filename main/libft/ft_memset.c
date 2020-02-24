/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 17:07:35 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void			*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;
	unsigned char	temp_c;

	temp = (unsigned char *)s;
	temp_c = (unsigned char)c;
	while (n-- > 0)
		*temp++ = temp_c;
	return (s);
}
