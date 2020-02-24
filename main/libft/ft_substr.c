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

	if (!s || start > ft_strlen(s))
		return (NULL);
	i = ft_strlen(s + start);
	i = (i < len) ? i : len;
	if (!(rst = malloc((sizeof(char)) * (i + 1))))
		return (NULL);
	ft_strncpy(rst, s + start, i);
	rst[i] = 0;
	return (rst);
}

char				*ft_substr_momo(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*pp;
	size_t	tlen;
	size_t  i;

	if ((tlen = ft_strlen(s)) < (size_t)start)
	{
		if (!(p = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if ((!s) || (!(p = (char *)malloc(sizeof(char) * (len + 1)))))
		return (NULL);
	i = 0;
	pp = p;
	s += start;
	if (start + len < len)
		return (NULL);
	if (start + len > tlen)
		len = tlen - start;
	while (len-- && *s)
		*p++ = *s++;
	*p = '\0';
	return (pp);
}

int main(int argc, char **argv)
{
	int start;
	size_t len;
	const char *str;
	const char *str_momo;
	char *rst;
	char *rst_ctrl;

	if (argv[1][0] == 'a')
	{
		str = argv[2];
		str_momo = argv[2];
		start = atoi(argv[3]);
		len = atoi(argv[4]);
		rst = ft_substr(str, start, len);
		rst_ctrl = ft_substr_momo(str_momo, start, len);
	if (!rst)
		fprintf(stderr, "!rst");
	if (!rst_ctrl)
		fprintf(stderr, "!rst_ctrl");
fprintf(stderr, "rst : |%s|\n", rst);
fprintf(stderr, "ctrl : |%s|\n", rst_ctrl);
		}
		else if (argv[1][0] == 'b')
		{
		rst = ft_substr(NULL, start, len);
		fprintf(stderr, "rstok\n");
		rst_ctrl = ft_substr_momo(str_momo, start, len);		
	if (!rst)
		fprintf(stderr, "!rst\n");
	if (!rst_ctrl)
		fprintf(stderr, "!rst_ctrl\n");
			start = atoi(argv[2]);
			len = atoi(argv[3]);
fprintf(stderr, "meine : |%s|\n", rst);
fprintf(stderr, "deine : |%s|\n", rst_ctrl);
	}
}