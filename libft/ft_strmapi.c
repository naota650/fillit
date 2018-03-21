/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 16:52:38 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/07 16:10:29 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	temp = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (temp)
	{
		while (s[i])
		{
			temp[i] = f(i, s[i]);
			i++;
		}
		temp[i] = '\0';
		return (temp);
	}
	return (NULL);
}
