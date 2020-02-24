/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 16:36:36 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <unistd.h>

static int			ft_strtrim_is_in(char const c, char const *set)
{
	size_t		i;

	fprintf(stderr, "ft_strtrim_is_in c : [%c]\n", c);
	fprintf(stderr, "ft_strtrim_is_in set : [%s]\n",set);
	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	size_t		size;
	size_t		front_trim;
	size_t		back_trim;
	char		*rst;

	if (!s1 || !set)
		return (NULL);
	front_trim = 0;
	back_trim = ft_strlen(s1);
	while (ft_strtrim_is_in(s1[front_trim], set))
		front_trim++;
	fprintf(stderr, "front_trim: %ld\n", front_trim);
	fprintf(stderr, "back_trim: %ld\n", back_trim);
	if (front_trim < back_trim)
	{
		while (ft_strtrim_is_in(s1[back_trim - 1], set))
			back_trim--;
	}
	size = (back_trim - front_trim);
	fprintf(stderr, "size : %ld\n", size);

	if (!(rst = malloc(sizeof(char) * size + 1)))
		return (NULL);

	ft_memmove(rst, s1 + front_trim , size);
	rst[size] = 0;
	fprintf(stderr, "rst : %s\n", rst);
	return (rst);
}

