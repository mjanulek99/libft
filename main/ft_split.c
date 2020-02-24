/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 16:52:15 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <unistd.h>

static size_t		ft_split_count_fields(char *t_s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	if (c == 0)
		return (1);
	if (*t_s && *t_s != c)
		count = 1;
	while (t_s[i])
	{
		if (t_s[i] && t_s[i] == c)
		{
			while (t_s[i] == c)
				i++;
			if (t_s[i] && t_s[i] != c)
				count++;
		}
		else
			i++;
	}
	return(count);
}

static size_t		ft_split_count_chars(char **t_s, char c)
{
	size_t i;

	i = 0;
	while ((*t_s)[i] && (*t_s)[i] == c)
		(*t_s)++;
	while ((*t_s)[i] && (*t_s)[i] != c)
		i++;
	while ((*t_s)[i] && (*t_s)[i] == c)
		(*t_s)++;
	*t_s = *t_s + i;
	return (i);
}

static size_t		ft_split_copy_chars(char **t_s, char *rst, char c)
{
	size_t i;

	i = 0;
	while ((*t_s)[i] && (*t_s)[i] == c)
		(*t_s)++;
	while ((*t_s)[i] && (*t_s)[i] != c)
	{
		rst[i] = (*t_s)[i];
		i++;
	}
	rst[i] = 0;
	*t_s = *t_s + i;
	return (i);
}

static void			ft_split_free(char **list,  size_t i)
{
	if (!list)
		return ;
	while (*list)
		free(*list++);
	free(list);
}

char				**ft_split(char const *s, char c)
{
	char **rst;
	char *t_s;
	size_t i;
	size_t fields;

	if (!s)
		return (NULL);
	t_s = (char *)s;
	i = 0;
	fields = ft_split_count_fields(t_s, c);
	if (!(rst = malloc(sizeof(char *) * (fields + 1))) || (!s))
		return (NULL);
	while (i < fields)
		if (!(rst[i++] = malloc(sizeof(char) * (ft_split_count_chars(&t_s, c) + 1))))
		{
			ft_split_free(rst, i - 1);
			return (NULL);
		}
	rst[i] = NULL;
	t_s = (char *)s;
	i = 0;
	while (i < fields)
		ft_split_copy_chars(&t_s, rst[i++], c);
	return (rst);
}