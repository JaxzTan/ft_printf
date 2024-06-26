/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:19:33 by chtan             #+#    #+#             */
/*   Updated: 2024/06/26 15:51:49 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[i++])
	{
		j = i;
		while (av[j++])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (1);
		}
	}
	return (0);
}

int	check_num(int ac, char **av)
{
	int	i;
	int	j;

	i = -1;
	while (++i < ac)
	{
		if (ft_atoi(av[i]) > INT32_MAX || ft_atoi(av[i]) < INT32_MIN)
			return (1);
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '+' || av[i][j] == '-' ||
				ft_isdigit(av[i][j + 1]))
				j++;
			while (ft_isdigit(av[i][j]))
				j++;
			if (av[i][j] != '\0')
				return (1);
		}
	}
	return (0);
}

char	**get_input(int ac, char **av)
{
	char	**numbers;

	if (ac == 2 && av[1][0] != 0)
	{
		numbers = ft_split(av[1], ' ');
		if (!check_dup(av) && check_num(ac, av))
			return (numbers);
	}
	return (0);
}
