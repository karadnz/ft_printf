/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:56:38 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 16:09:53 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	char	ch;
	int		rt;

	rt = 0;
	if (nbr == -2147483648)
		rt += (write(1, "-2147483648", 11));
	else
	{
		if (nbr < 0)
		{
			rt += write (1, "-", 1);
			nbr *= -1;
		}
		if (nbr > 9)
			rt += ft_putnbr(nbr / 10);
		ch = 48 + (nbr % 10);
		rt += write(1, &ch, 1);
	}
	return (rt);
}
