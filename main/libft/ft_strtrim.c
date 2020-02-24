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
	back_trim = ft_strlen(s1) - 1;
	while (ft_strtrim_is_in(s1[front_trim], set))
		front_trim++;
	if (front_trim < back_trim)
	{
		while (ft_strtrim_is_in(s1[back_trim], set))
			back_trim--;
	}
	size = (back_trim - front_trim + 1);
	if (!(rst = malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_strlcpy(rst, s1 + front_trim, size + 1);
	rst[size] = 0;
	return (rst);
}

static int		ft_is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim_momo(char const *s1, char const *set)
{
	int		j;
	char	*tab;
	char	*tab1;

	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	while (*s1 != '\0' && ft_is_set(*(s1 + (j - 1)), set) == 1 && j)
		j--;
	while (*s1 != '\0' && ft_is_set(*s1, set) == 1 && j)
	{
		j--;
		s1++;
	}
	if (!(tab = (char*)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	tab1 = tab;
	while (j--)
		*tab++ = *s1++;
	*tab = 0;
	return (tab1);
}

