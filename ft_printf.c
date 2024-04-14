/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:37:55 by chtan             #+#    #+#             */
/*   Updated: 2024/04/14 17:51:41 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list arg, const char c)
{
	if (c == 'c')
		return (ft_print_c((char) va_arg(arg, int)));
	if (c == 's')
		return (ft_print_s(va_arg(arg, char *)));
	if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(arg, int)));
	// if (c == 'p')
	// 	return(ft_print_p(va_arg(arg, )));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *buffer, ...)
{
	int		result;
	va_list	arg;
	int		i;

	result = 0;
	i = -1;
	va_start(arg, buffer);
	while (buffer[++i])
	{
		if (buffer[i] == '%')
			result += ft_check(arg, buffer[++i]);
		else
			result += ft_print_c(buffer[i]);
	}
	va_end(arg);
	return (result);
}
