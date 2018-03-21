/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 20:17:10 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/06 20:26:40 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char			*temp;
	int				start;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	start = i;
	if (s[start] == '\0')
	{
		temp = ft_strnew(0);
		temp[0] = '\0';
		return (temp);
	}
	while (s[i])
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	if (!(temp = (ft_strsub(s, start, i - start + 1))))
		return (NULL);
	return (temp);
}
