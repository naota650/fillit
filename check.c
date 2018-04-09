/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 12:32:50 by lmartine          #+#    #+#             */
/*   Updated: 2018/04/09 12:32:58 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checker(char *str, char piece)
{
	if (str[0] && str[0] == '#')
	{
		str[0] = piece;
		return (1 + ft_checker(str - 1, piece) + ft_checker(str + 1, piece)
		+ ft_checker(str + 5, piece));
	}
	else
		return (0);
}

int		ft_block(char *str)
{
	static int	i = 0;
	static int	a = 0;
	static int	x = 0;
	static int	lc = 0;

	while (str[i] == '.' || str[i] == '#' || str[i] == '\n')
	{
		if (str[i] == '#' || str[i] == '.')
			x++;
		if (str[i] == '#')
			a++;
		if (str[i] == '\n')
			lc++;
		if ((i + 1) % 21 == 0)
			if (str[i] != '\n')
				return (0);
		i++;
	}
	if (x % 16 != 0)
		return (0);
	if (a % 4 != 0 || a == 0)
		return (0);
	if ((lc + 1) % 5 != 0)
		return (0);
	return (((i + 1) % 21 != 0) ? 0 : 1);
}

int		ft_success(char *str, char letter)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && ft_checker(&str[i], letter) != 4)
		{
			ft_putstr("error");
			exit(0);
		}
		i++;
	}
	return (0);
}

