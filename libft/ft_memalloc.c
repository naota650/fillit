/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:36:11 by lmartine          #+#    #+#             */
/*   Updated: 2018/02/26 20:36:56 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void *temp;

	temp = (void *)malloc(sizeof(size_t) * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, size);
	return (temp);
}
