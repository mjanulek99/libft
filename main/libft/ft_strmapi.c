/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 16:57:11 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <unistd.h>

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rst;
	size_t	size;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	if (!(rst = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s[i])
	{
		rst[i] = (*f)(i, s[i]);
		i++;
	}
	rst[i] = 0;
	return (rst);
}
