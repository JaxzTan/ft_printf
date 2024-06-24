/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_supp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:49:24 by chtan             #+#    #+#             */
/*   Updated: 2024/04/14 18:30:44 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	while (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*result;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	result = (char *)malloc(len + 1);
	i = 0;
	if (!result)
		return (NULL);
	while (i <= len)
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_numlen(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n)
	{
		result[--len] = (char)(n % 10) + '0';
		n /= 10;
	}
	return (result);
}
