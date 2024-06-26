/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:35:56 by chtan             #+#    #+#             */
/*   Updated: 2024/06/26 11:14:04 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct s_stack
{
	struct s_stack	*next;
	int				val;
	int				index;
}	t_stack;

//  check input
int		check_dup(char **av);
int		check_num(int ac, char **av);
char	**get_input(int ac, char **av);

#endif