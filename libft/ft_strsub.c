/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 17:26:43 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/10 11:09:28 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*temp;

	i = 0;
	temp = (char *)malloc((len + 1) * sizeof(char));
	if (temp && s)
	{
		while (i < len)
		{
			temp[i] = s[start];
			i++;
			start++;
		}
		temp[i] = '\0';
		return (temp);
	}
	return (NULL);
}
