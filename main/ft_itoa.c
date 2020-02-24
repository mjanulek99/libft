/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 14:55:58 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

static size_t		ft_itoa_size(int n)
{
	int			count;

	count = 1;
	while (n / 10 != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static void			ft_itoa_parse(char *rst, long long n, size_t size)
{
	char			temp;

	if (n < 0)
	{
		n = -n;
		*rst++ = '-';
		size = size - 1;
	}
	temp = n % 10 + '0';
	rst[size - 1] = temp;
	if (n / 10 > 0)
		ft_itoa_parse(rst, n / 10, size - 1);
}

char				*ft_itoa(int n)
{
	char			*rst;
	long long		temp;
	size_t			size;

	temp = (long long)n;
	size = ft_itoa_size(n);
	if (n < 0)
		size = size + 1;
fprintf(stderr, "size = %ld\n", size);
	if (!(rst = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(rst, size + 1);
	ft_itoa_parse(rst, temp, size);
	return (rst);
}
