/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:39:52 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/06 23:21:20 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*((unsigned char*)s) == (unsigned char)c)
			return ((unsigned char*)s);
		s++;
	}
	return (NULL);
}
