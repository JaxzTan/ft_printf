/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:37:55 by chtan             #+#    #+#             */
/*   Updated: 2024/04/10 14:51:24 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


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
			
		}
		i++;
	}
}