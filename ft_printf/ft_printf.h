/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:37:58 by chtan             #+#    #+#             */
/*   Updated: 2024/04/20 12:24:18 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
// # include "./libft/libft.h"

int		ft_printf(const char *buffer, ...);
int		ft_print_c(char c);
int		ft_print_s(char *str);
int		ft_print_x(unsigned int num, char c);
int		ft_print_p(uintptr_t buff);
int		ft_print_int(int nb);
int		ft_strlen(char *str);
char	*ft_itoa(int n);
int		ft_print_u(unsigned int nb);
#endif
