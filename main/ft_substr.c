/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 16:37:55 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*rst;
	size_t		i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (sub);
	i = ft_strlen(s + start);
	i = (i < len) ? i : len;
	if (!(rst = malloc((sizeof (char)) * (i + 1))))
		return NULL;
	ft_memmove(rst, s + start, i);
	rst[i] = 0;
	return (rst);
}
