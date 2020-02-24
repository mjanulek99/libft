/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 17:05:34 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <unistd.h>

static void		ft_itoa_parse_fd(int fd, long long n)
{
	char		temp_c;
	long long	temp_n;
fprintf(stderr, "ft_itoa_parse : n : |%lld|\n", n);

	temp_c = n % 10 + '0';
	temp_n = n / 10;
	if (temp_n > 0)
		ft_itoa_parse_fd(fd, temp_n);
	write(fd, &temp_c, 1);
}

void			ft_putnbr_fd(int n, int fd)
{
	long long	temp_n;

	temp_n = (long long)n;
fprintf(stderr, "ft_putnbr_fd : n : |%d|\n", n);
	if (fd < 0 || fd > FOPEN_MAX)
		return ;
	if (temp_n < 0)
	{
		temp_n = -temp_n;
fprintf(stderr, "ft_putnbr_fd : temp_n : |%lld|\n", temp_n);

		write(fd, &"-", 1);
	}
	ft_itoa_parse_fd(fd, temp_n);
}

