/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:57:36 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 16:09:51 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long int ptr, int flag)
{
	char	*hex;
	int		len;

	hex = "0123456789abcdef";
	len = 0;
	if (flag == 1)
	{
		len += write (1, "0x", 2);
		flag = 0;
	}
	if (ptr > 15)
		len += ft_putptr(ptr / 16, flag);
	len += write(1, &hex[ptr % 16], 1);
	return (len);
}
