/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 12:26:51 by lmartine          #+#    #+#             */
/*   Updated: 2018/04/09 12:26:54 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			tet_poscheck(char *array, char *block)
{
	if (block[0] && array[0] == '.' && block[0] > 64)
	{
		array[0] = block[0];
		if (block[5])
		{
			return (1 + tet_poscheck(1 + array, 1 + block) +
				tet_poscheck(array - 1, block - 1) +
			tet_poscheck(array + g_size + 1, block + 5));
		}
		else
			return (1 + tet_poscheck(array + 1, block + 1) +
					tet_poscheck(array - 1, block - 1));
	}
	else
		return (0);
}

void		tet_posremove(char *array, char *block)
{
	if (array[0] == block[0] && array[0] != '\n')
	{
		array[0] = '.';
		tet_posremove(array - g_size - 1, block);
		tet_posremove(array + 1, block);
		tet_posremove(array - 1, block);
		tet_posremove(array + g_size + 1, block);
	}
}

int			ft_solvetet(char *array, char **new, int piece)
{
	int		i;
	int		check;
	char	*block;

	i = -1;
	if (new[0] == '\0')
		return (1);
	block = ft_piecefinder(*new);
	while (array[++i])
	{
		check = tet_poscheck(&array[i], block);
		if (check != 4)
			tet_posremove(&array[i], block);
		else
		{
			if (piece == ft_currentpiece(&array[0]) - 64)
				return (1);
			if (!ft_solvetet(array, &new[1], piece))
				tet_posremove(&array[i], block);
			else
				return (1);
		}
	}
	return (0);
}
