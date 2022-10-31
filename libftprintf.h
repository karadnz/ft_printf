/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:14:06 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 14:38:54 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_specifer(va_list pa, const char format);
int		ft_putchr(int c);
int		ft_putstr(const char *str);
int		ft_putnbr(int nbr);
int		ft_putnbru(unsigned int nbr);
int		ft_putnbruhex(unsigned int nbr, int flag);
int		ft_putptr(unsigned long long int ptr, int flag);
int		ft_printf(const char *format, ...);

#endif