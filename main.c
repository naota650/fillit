/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 12:27:24 by lmartine          #+#    #+#             */
/*   Updated: 2018/04/09 12:31:37 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_opener(char *rf)
{
	int		x;
	int		fd;
	char	buf;
	char	*str;

	x = 0;
	fd = open(rf, O_RDONLY);
	while (read(fd, &buf, 1))
		x++;
	str = ft_strnew(x);
	close(fd);
	x = 0;
	fd = open(rf, O_RDONLY);
	while (read(fd, &buf, 1))
		str[x++] = buf;
	close(fd);
	return (str);
}

int		main(int ac, char **av)
{
	int		piece;
	char	*grid;
	char	**new;
	char	*array;

	if (ac != 2)
		return (1);
	if (ac == 2)
	{
		grid = ft_opener(av[1]);
		new = ft_splitter(grid, &piece);
		g_size = ft_mapsize(piece);
		array = ft_strnew(g_size * (g_size + 1));
		ft_gridmaker(array, new, piece);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr("usage: ");
		ft_putstr(av[0]);
		ft_putstr(" target_file\n");
	}
	return (0);
}
