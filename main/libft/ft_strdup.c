/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 17:00:27 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char		*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*rst;

	len = ft_strlen(s);
	if (!(rst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_bzero(rst, len + 1);
	i = 0;
	while (s[i])
	{
		rst[i] = s[i];
		i++;
	}
	return (rst);
}
