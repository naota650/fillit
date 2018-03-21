/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 22:17:35 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/10 22:30:16 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrev(const char *s)
{
	char	*temp;
	int		i;
	int		length;

	i = 0;
	temp = (char *)malloc(ft_strlen(s));
	if (!temp)
		return (NULL);
	length = ft_strlen(s);
	while (i++ < --length)
		temp[i] = s[length];
	temp[i] = '\0';
	return (temp);
}
