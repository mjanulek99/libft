/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 17:04:12 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <unistd.h>

static void		ft_strcat_pass(unsigned char **str)
{
	while (*(*str))
		*str = *str + 1;
}

char			*ft_strcat(char *dest, const char *src)
{
	unsigned char		*temp_src;
	unsigned char		*temp_dest;
	unsigned long long	temp;

	temp = (unsigned long long)dest;
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	ft_strcat_pass(&temp_dest);
	ft_strcpy((char *)temp_dest, (char *)temp_src);
	return ((char *)temp);
}
