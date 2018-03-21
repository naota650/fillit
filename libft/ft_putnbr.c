/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:51:11 by lmartine          #+#    #+#             */
/*   Updated: 2018/03/10 21:38:53 by lmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648");
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}
