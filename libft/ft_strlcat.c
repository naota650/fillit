/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:07:54 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/06 23:57:27 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	k = ft_strlen(dst);
	while (dst[i])
		i++;
	if (dstsize < i)
		return (ft_strlen((char*)src) + dstsize);
	else
	{
		while (i < dstsize - 1 && src[j])
			dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (k + ft_strlen((char*)src));
}
