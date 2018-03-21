/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 19:32:45 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/10 20:42:21 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		length;
	int		sign;
	char	*temp;

	sign = n;
	length = 1;
	while (sign /= 10)
		length++;
	sign = n < 0 ? 1 : 0;
	length = n < 0 ? length += 1 : length;
	if (n == -2147483648)
		return (temp = ft_strdup("-2147483648"));
	temp = ft_strnew(length);
	if (!temp)
		return (NULL);
	if (sign)
		temp[0] = '-';
	n = n < 0 ? n *= -1 : n;
	while (--length >= sign)
	{
		temp[length] = (n >= 10) ? (n % 10) + 48 : n + 48;
		n /= 10;
	}
	temp[ft_strlen(temp)] = '\0';
	return (temp);
}
