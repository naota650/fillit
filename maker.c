/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maker.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 12:33:15 by lmartine          #+#    #+#             */
/*   Updated: 2018/04/09 12:33:17 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_mapsize(int piece)
{
	int i;

	i = 1;
	while (i * i < piece * 4)
		i++;
	return (i);
}

void	ft_builder(char *array)
{
	int x;

	x = -1;
	while (++x < (g_size * (g_size + 1)))
	{
		if (x % (g_size + 1) == g_size)
			array[x] = '\n';
		else
			array[x] = '.';
	}
	array[x] = '\0';
}

char	*ft_piecefinder(char *str)
{
	while (*str && (*str == '.' || *str == '\n'))
		str++;
	return (str);
}

char	ft_currentpiece(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '\n' && str[i] == '.')
			i++;
		return (str[i]);
	}
	return (0);
}

void	ft_gridmaker(char *array, char **new, int piece)
{
	ft_builder(array);
	while (ft_solvetet(array, new, piece) != 1)
	{
		free(array);
		g_size++;
		array = ft_strnew(g_size * (g_size + 1));
		ft_builder(array);
	}
	ft_putstr(array);
	free(array);
}
