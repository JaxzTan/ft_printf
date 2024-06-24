/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:54:00 by chtan             #+#    #+#             */
/*   Updated: 2024/04/19 16:36:11 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int nb)
{
	char	*str;
	int		res;

	str = ft_itoa(nb);
	res = ft_print_s(str);
	free(str);
	return (res);
}
