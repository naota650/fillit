/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:43:38 by lmartine          #+#    #+#             */
/*   Updated: 2018/02/26 20:44:47 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*temp;
	const char	*srctemp;

	temp = (char *)dst;
	srctemp = (char *)src;
	if (n == 0 || temp == srctemp)
		return (temp);
	while (n > 0)
	{
		*temp++ = *srctemp++;
		n--;
	}
	return (dst);
}
