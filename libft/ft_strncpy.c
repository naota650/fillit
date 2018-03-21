/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:14:54 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/06 23:49:18 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	char		*s1;
	char		*s2;

	i = 0;
	s1 = dst;
	s2 = (char*)src;
	if (ft_strlen(s2) < len)
	{
		while (i++ < ft_strlen(s2))
			*dst++ = *src++;
		while (i++ <= len)
			*dst++ = '\0';
	}
	else
	{
		while (i++ < len && src)
			*dst++ = *src++;
	}
	return (s1);
}
