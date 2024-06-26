/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:48:52 by chtan             #+#    #+#             */
/*   Updated: 2024/05/15 19:13:00 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int z)
{
	if ((z >= 'a' && z <= 'z') || (z >= 'A' && z <= 'Z'))
		return (1);
	return (0);
}
