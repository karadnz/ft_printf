/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:42:43 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 16:34:56 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifer(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchr(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_putptr(va_arg(args, unsigned long long int), 1));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putnbru(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_putnbruhex(va_arg(args, unsigned int), 0));
	else if (format == 'X')
		return (ft_putnbruhex(va_arg(args, unsigned int), 1));
	else if (format == '%')
		return (write(1, "%", 1));
	return (0);
}
