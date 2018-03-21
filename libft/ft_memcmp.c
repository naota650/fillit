/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:41:40 by lmartine          #+#    #+#             */
/*   Updated: 2018/02/26 20:43:32 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*temp1;
	const unsigned char		*temp2;

	if (s1 == s2 || n == 0)
		return (0);
	temp1 = (const unsigned char *)s1;
	temp2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*temp1 != *temp2)
			return (*temp1 - *temp2);
		if (n)
		{
			temp1++;
			temp2++;
		}
	}
	return (0);
}
