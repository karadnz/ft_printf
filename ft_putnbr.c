/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:56:38 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 15:27:47 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *) b;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
	return (b);
}
static int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

int	ft_putnbr(int num)
{
	char	str[13];
	int		is_neg;
	int		len;

	is_neg = (num < 0);
	ft_bzero(str, 13);
	if (num == 0)
		str[0] = '0';
	len = 0;
	while (num != 0)
	{
		str[len++] = '0' + ft_abs(num % 10);
		num = (num / 10);
	}
	if (is_neg)
		str[len] = '-';
	else if (len > 0)
		len--;
	while (len >= 0)
		write(1, &str[len--], 1);
    return(0);
}