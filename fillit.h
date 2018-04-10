/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 12:34:02 by lmartine          #+#    #+#             */
/*   Updated: 2018/04/09 12:34:05 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "./libft/libft.h"

int		ft_success(char *str, char letter);
int		ft_block(char *str);
int		ft_checker(char *str, char piece);
int		ft_mapsize(int piece);
int		tet_poscheck(char *array, char *block);
int		ft_solvetet(char *array, char **new, int piece);
char	**ft_malloc(char *str, int *piece, char letter);
char	**ft_splitter(char *str, int *piece);
char	*ft_opener(char *av);
char	*ft_piecefinder(char *str);
char	ft_currentpiece(char *str);
void	ft_builder(char *array);
void	ft_gridmaker(char *array, char **new, int piece);
void	tet_posremove(char *array, char *block);
int   g_size;

#endif
