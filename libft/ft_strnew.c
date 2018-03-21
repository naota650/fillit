/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:15:54 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/06 20:32:29 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*temp;

	temp = (char*)malloc(sizeof(char) * size + 1);
	if (!temp)
		return (NULL);
	ft_memset(temp, (int)'\0', size + 1);
	return (temp);
}
