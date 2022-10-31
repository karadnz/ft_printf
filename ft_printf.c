/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:13:19 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 15:33:55 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>


int ft_printf(const char* format, ...)
{
    va_list args;
    char    *str;
    int     rt;
    
    rt = 0;
    str = (char *)format;
    va_start(args, format);

    while(*str)
    {
        if(*str == '%')
            ft_specifer(args, *++str);
        else
            rt += write(1, str, 1);
        str++;
    }
    return (rt);
    
}

int main()
{
    char *str= "deneme";
    int rt = ft_printf("deneme %s %c %i ", "123", 'd', -3545);
}