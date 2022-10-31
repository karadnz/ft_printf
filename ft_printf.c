/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:13:19 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 14:56:19 by mkaraden         ###   ########.fr       */
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
    
}

int main()
{
    char *str= "deneme";
    ft_printf("deneme %x", "123");
}