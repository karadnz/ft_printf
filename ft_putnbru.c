/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:57:02 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 15:57:15 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbru(unsigned int num)
{
	char	ch;
	int		rt;

	rt = 0;
	if (num > 9)
		rt += ft_putnbru(num / 10);
	ch = 48 + (num % 10);
	rt += write(1, &ch, 1);
	return (rt);
}