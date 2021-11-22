/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:37:58 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/22 16:54:30 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		get_ret(const char *fmt, va_list args);
int		ft_printf(const char *fmt, ...);
void	rec_hex(unsigned int a, int *count);
void	rec_hex_up(unsigned int a, int *count);
int		ft_print_p(unsigned long long ptr);
void	rec_p(unsigned long long a, int *count);
int		ft_print_x(unsigned int n);
int		ft_print_xup(unsigned int n);
int		ft_print_di(int a);
int		ft_print_c(int a);
int		ft_print_perc(void);
int		ft_print_s(char *a);
int		ft_print_u(unsigned int a);

#endif