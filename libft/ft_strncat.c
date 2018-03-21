/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:11:11 by lmartine          #+#    #+#             */
/*   Updated: 2018/02/26 21:12:47 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	int			i;
	int			j;
	size_t		size;

	i = 0;
	j = 0;
	size = n;
	while (s1[i] != '\0')
		i++;
	while ((s2[j] != '\0' && size > 0))
	{
		s1[j + i] = s2[j];
		j++;
		size--;
	}
	s1[j + i] = '\0';
	return (s1);
}
