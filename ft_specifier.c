/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:42:43 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 14:56:20 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//c s p d i u x X
int ft_specifer(va_list args, const char format)
{
    int rt;

    rt = 0;
    if (format == 'c')
    {
        write(1, &va_arg(args, char), 1);
    }
    else if (format == 's')
    {
        ft_putstr(va_arg(args, char *));
    }
    else if (format == 'p')
    {
        write(1, &va_arg(args, char), 1);
    }
    else if (format == 'd')
    {
        write(1, &va_arg(args, char), 1);
    }
    else if (format == 'i')
    {
        write(1, &va_arg(args, char), 1);
    }
    else if (format == 'u')
    {
        write(1, &va_arg(args, char), 1);
    }
    else if (format == 'x')
    {
        write(1, &va_arg(args, char), 1);
    }
    else if (format == 'X')
    {
        write(1, &va_arg(args, char), 1);
    }

    return (rt);

}
