/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:37:55 by chtan             #+#    #+#             */
/*   Updated: 2024/04/11 16:20:55 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check(va_list arg, const char c)
{
	if (c == 'c')
		return(ft_putchar_c((char) va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr_s((char *) va_arg(arg, char *)));
	if (c == 'i' || c == 'd')
		return (ft_putint_DI((int)));
}

int	ft_printf(const char *buffer, ...)
{
	int result; // ft_printf return a int value
	va_list arg;
	int i;

	i = 0;
	va_start(arg, buffer);
	while (buffer[i])
	{
		if (buffer[i] == '%')
		{
			i++;
			ft_check(arg, buffer[i]);
		}
		else
			i++;
	}
	va_end(arg);
	return (result);
}
