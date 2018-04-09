/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 12:27:05 by lmartine          #+#    #+#             */
/*   Updated: 2018/04/09 12:27:08 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_malloc(char *str, int *piece, char letter)
{
	char **temp;
	char *oldstr;

	oldstr = str;
	temp = (char **)malloc(sizeof(char *) * 27);
	while (*oldstr != '\0')
	{
		temp[*piece] = ft_strnew(21);
		ft_strncpy(temp[*piece], oldstr, 21);
		ft_success(temp[*piece], letter++);
		*piece += 1;
		if (oldstr[20] == '\0')
			break ;
		oldstr += 21;
	}
	temp[*piece] = NULL;
	return (temp);
}

char	**ft_splitter(char *str, int *piece)
{
	char **newstr;

	if (!(ft_block(str)))
	{
		ft_putstr("error\n");
		exit(0);
	}
	newstr = ft_malloc(str, piece, 'A');
	return (newstr);
}

