/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjanulek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mjanulek          #+#    #+#             */
/*   Updated: 2020/02/13 14:55:58 by mjanulek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long		ft_atoi_pass(char **str)
{
	while (**str == ' ' || **str == '\f' || **str == '\t' ||
	**str == '\n' || **str == '\r' || **str == '\v')
		*str = *str + 1;
	if (**str == '+')
	{
		*str = *str + 1;
		return (1);
	}
	else if (**str == '-')
	{
		*str = *str + 1;
		return (-1);
	}
	else
		return (1);
}

int						ft_atoi(const char *str)
{
	char			*temp;
	long long		rst;
	long long		sign;

	rst = 0;
	temp = (char *)str;
	sign = ft_atoi_pass(&temp);
	while (rst >= 0 && *temp >= '0' && *temp <= '9')
	{
		rst = (rst * 10) + *temp - '0';
		temp++;
		if (rst < 0)
		{
			if (sign == -1)
				return (0);
			else
				return (-1);
		}
	}
	return ((int)rst * sign);
}
