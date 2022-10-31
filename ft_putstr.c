/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:38:01 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/31 16:04:20 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(const char *s)
{
	size_t	i;

	i = 0;
    if (!str)
        return (write(1, "(null)", 6));
    while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
    return (i);
}