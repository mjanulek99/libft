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
	size_t	len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(rst = malloc(sizeof(char) * (len + 1))) || !s1 || !s2)
		return (NULL);
	while (*s1)
		rst[i++] = *s1++;
	while (*s2)
		rst[i++] = *s2++;
	rst[i] = 0;
	return (rst);
}

char	*ft_strjoin_momo(char const *s1, char const *s2)
{
	char *p1;
	char *p2;
	char *p;
	char *pp;

	p1 = (char *)s1;
	p2 = (char *)s2;
	if (!s1 || !s2 || !(p = (char *)malloc(sizeof(char) *
		((ft_strlen(s1)) + (ft_strlen(s2)) + 1))))
		return (NULL);
	pp = p;
	while (*p1)
		*p++ = *p1++;
	while (*p2)
		*p++ = *p2++;
	*p = '\0';
	return (pp);
}

int main(int argc, char **argv)
{
	const char *str;
	const char *str_momo;
	const char *str1;
	const char *str1_momo;
	str = argv[1];
	str_momo = argv[1];
	str1_momo = argv[2];
	str1 = argv[2];
	// printf("math [%s]\n", ft_strjoin(str, str1));	
	// printf("momo [%s]\n", ft_strjoin_momo(str_momo, str1_momo));
	printf("math [%s]\n", ft_strjoin("NULL", NULL));	
	printf("momo [%s]\n", ft_strjoin_momo("NULL", NULL));


}