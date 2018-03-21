/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:09:58 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/07 16:06:19 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char		*temp;
	int			i;

	i = 0;
	if (!s || !f)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (temp)
	{
		while (s[i])
		{
			temp[i] = f(s[i]);
			i++;
		}
		temp[i] = '\0';
		return (temp);
	}
	return (NULL);
}
