/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:29:47 by chtan             #+#    #+#             */
/*   Updated: 2024/06/26 15:43:33 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	char	**input;
	t_stack	*a;
	t_stack	*b;

	if (ac > 1)
	{
		input = get_input(ac, av);
		if (!input)
			return (write(1, "error\n", 6));
		
	}
}
