/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:37:58 by chtan             #+#    #+#             */
/*   Updated: 2024/04/19 10:13:41 by chtan            ###   ########.fr       */
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
int 	ft_print_xX(unsigned int num, char c);
int		ft_print_p(uintptr_t buff);
int		ft_print_int(int nb);
int		ft_strlen(char *str);
char	*ft_itoa(int n);
#endif
