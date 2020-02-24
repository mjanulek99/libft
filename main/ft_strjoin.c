/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 16:57:49 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*rst;
	size_t	len[3];
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len[0] = ft_strlen(s1)
	len[1] = ft_strlen(s2)
	len[2] = len[0] + len[1];
	if (!(rst = malloc(sizeof(char) * (len[2] + 1))))
		return (NULL);
	ft_mmmove(rst, s1, len[0]);
	ft_mmmove(rst + len[0], s1, len[1]);
	rst[len[2]] = 0;
	return (rst);
}
