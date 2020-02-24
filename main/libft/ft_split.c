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
		if (t_s[i] == c)
		{
			while (t_s[i] == c)
				i++;
			if (t_s[i] && t_s[i] != c)
				count++;
		}
		else
			i++;
	}
	return (count);
}

static size_t		ft_split_count_chars(char **t_s, char c)
{
	size_t i;

	if (c == 0)
		return (1);
	i = 0;
	while ((*t_s)[i] == c)
		(*t_s)++;
	while ((*t_s)[i] && (*t_s)[i] != c)
		i++;
	while ((*t_s)[i] == c)
		(*t_s)++;
	*t_s = *t_s + i;
	if (**t_s == c)
		*t_s = *t_s + 1;
	return (i);
}

static size_t		ft_split_copy_chars(char **t_s, char *rst, char c)
{
	size_t i;

	i = 0;
	while ((*t_s)[i] == c)
		(*t_s)++;
	while ((*t_s)[i] && (*t_s)[i] != c)
	{
		rst[i] = (*t_s)[i];
		i++;
	}
	rst[i] = 0;
	*t_s = *t_s + i;
	while (**t_s == c)
		*t_s = *t_s + 1;
	return (i);
}

static void			ft_split_free(char **list, size_t i)
{
	while (i--)
		free(list[i]);
}

char				**ft_split(char const *s, char c)
{
	char	**rst;
	char	*t_s;
	size_t	i;
	size_t	fields;

	if (!s)
		return (NULL);
	t_s = (char *)s;
	i = 0;
	fields = ft_split_count_fields(t_s, c);
	if (!(rst = malloc(sizeof(char *) * (fields + 1))) || (!s))
		return (NULL);
	while (i < fields)
		if (!(rst[i++] = malloc(sizeof(char) *
		(ft_split_count_chars(&t_s, c) + 1))))
		{
			ft_split_free(rst, i);
			return (NULL);
		}
	rst[i] = NULL;
	t_s = (char *)s;
	i = 0;
	while (i < fields)
		ft_split_copy_chars(&t_s, rst[i++], c);
	return (rst);
}

static int		ft_is_charset(char c, char charset)
{
	if (charset == c)
		return (1);
	return (0);
}

static char		**ft_freetab(char **tab, int n)
{
	int i;

	i = 0;
	while (i < n)
		free(tab[i++]);
	free(tab[n]);
	return (NULL);
}

static int		ft_nbstr(char *str, char charset)
{
	int i;
	int l;
	int cpt;

	i = 0;
	l = 1;
	cpt = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (ft_is_charset(str[i], charset) == 1)
			l = 1;
		else if (l == 1)
		{
			l = 0;
			cpt++;
		}
		i++;
	}
	return (cpt);
}

static char		*ft_mkstr(char *str, char charset)
{
	int		i;
	char	*str1;

	i = 0;
	while (str[i] != '\0' && ft_is_charset(str[i], charset) == 0)
		i++;
	if (!(str1 = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] != '\0' && ft_is_charset(str[i], charset) == 0)
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

char			**ft_split_momo(char const *str, char charset)
{
	int		i;
	int		n;
	char	**tab;
	char	*str1;

	i = 0;
	str1 = (char *)str;
	n = ft_nbstr(str1, charset);
	if (!str || !(tab = (char**)malloc(sizeof(char*) * (n + 1))))
		return (NULL);
	while (*str1 != '\0')
	{
		while (*str1 != '\0' && ft_is_charset(*str1, charset) == 1)
			str1++;
		if (*str1 != '\0' && ft_is_charset(*str1, charset) == 0)
		{
			if (!(tab[i] = ft_mkstr(str1, charset)))
				return (ft_freetab(tab, i));
			i++;
		}
		while (*str1 != '\0' && ft_is_charset(*str1, charset) == 0)
			str1++;
	}
	tab[i] = 0;
	return (tab);
}


int 	main(int argc, char **argv)
{
	char **test;
	char **test_momo;
	int i;
	i = 0;
	// str1 = argv[]
	test_momo = ft_split_momo(argv[1], *argv[2]);
	test = ft_split(argv[1], *argv[2]);
	while(*test)
	{
		printf("%s\n", *test++);
	}
	printf("-------------------------\n");
	while(test_momo[i])
	{
		printf("%s\n", test_momo[i]);
		i++;
	}
}