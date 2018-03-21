/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 18:34:42 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/10 22:26:38 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char *temp;

	if (!s1 || !s2)
		return (NULL);
	if (!(temp = (char *)malloc(ft_strlen((char *)s1) +
					ft_strlen((char *)s2) + 1)))
		return (NULL);
	temp = ft_strcpy(temp, s1);
	temp = ft_strcat(temp, s2);
	return (temp);
}
