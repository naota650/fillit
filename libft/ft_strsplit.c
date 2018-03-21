/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 17:00:22 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/10 20:30:57 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_words(char const *s, char c, int *index)
{
	int		i;
	int		start;
	char	*word;

	i = 0;
	while (s[*index] == c && s[*index])
		(*index)++;
	start = *index;
	while (s[*index] != c && s[*index])
		(*index)++;
	if (!(word = ft_strnew(*index - start)))
		return (NULL);
	while (start < *index)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**temp;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	i = 0;
	temp = (char **)malloc((count + 1) * sizeof(char *));
	if (!temp)
		return (NULL);
	while (i < count)
		temp[i++] = ft_words(s, c, &j);
	temp[i] = 0;
	return (temp);
}
