/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:18:51 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/07 15:49:49 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	while (len > 0 && s[len] != c)
		len--;
	if (s[len] == c)
		return (&((char*)s)[len]);
	return (NULL);
}
