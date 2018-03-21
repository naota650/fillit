/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:26:08 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/10 20:52:44 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	sign;
	int	number;
	int	i;

	sign = 1;
	number = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t') ||
			(str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10;
		number += str[i] - '0';
		i++;
	}
	return (number * sign);
}
