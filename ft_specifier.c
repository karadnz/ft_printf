/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:42:43 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 15:59:26 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//c s p d i u x X
int ft_specifer(va_list args, const char format)
{
    if (format == 'c') //char
    {
        return(ft_putchr(va_arg(args, int)));
    }
    else if (format == 's') //string
    {
        return(ft_putstr(va_arg(args, char *)));
    }
    else if (format == 'p') //void * in hexadecimal
    {
        return (ft_putptr(va_arg(pa, unsigned long long int), 1));
    }
    else if (format == 'd') // decimal
    {
        return(ft_putnbr(va_arg(args, int)));
    }
    else if (format == 'i') //integer in base 10
    {
        return(ft_putnbr(va_arg(args, int)));
    }
    else if (format == 'u') //unsigned decimal 
    {
        return(ft_putnbru(va_arg(args, unsigned int)));
    }
    else if (format == 'x') //hex in lowercase
    {
        return (ft_putnbruhex(va_arg(pa, unsigned int), 0));
    }
    else if (format == 'X') //hex in uppercase
    {
        return (ft_putnbruhex(va_arg(pa, unsigned int), 1));
    }
    else if (format == '%') //percent sign
    {
        return (write(1, "%", 1));
    }
    return (0);
}
