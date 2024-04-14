/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:37:55 by chtan             #+#    #+#             */
/*   Updated: 2024/04/13 20:51:18 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check(va_list arg, const char c)
{
	if (c == 'c')
		return (ft_print_c((char) va_arg(arg, int)));
	// if (c == 's')
	// 	return (ft_print_s((char *) va_arg(arg, char *)));
	// if (c == 'i' || c == 'd')
	// 	return (ft_putint_s((int)));
	return (0);
}

int	ft_printf(const char *buffer, ...)
{
	int result; // ft_printf return a int value
	va_list arg;
	int i;

	i = -1;
	va_start(arg, buffer);
	while (buffer[++i])
	{
		if (buffer[i] == '%')
		{
			result += ft_check(arg, buffer[++i]);
		}
		else
			result += ft_print_c(buffer[i]);
	}
	va_end(arg);
	return (result);
}
