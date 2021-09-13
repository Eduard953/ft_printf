/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:37:58 by ebeiline          #+#    #+#             */
/*   Updated: 2021/09/13 17:58:25 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		get_flag(const char *fmt, va_list args, int p_flag);
int		ft_printf(const char *fmt, ...);
int		rec_hex(unsigned long long a);
int		rec_hex_up(unsigned long long a);
int		ft_print_p(unsigned long long ptr);
int		ft_print_x(unsigned long long n);
int		ft_print_xup(unsigned long long n);
int		ft_print_di(int a);
int		ft_print_c(int a);
int		ft_print_perc(void);
int		ft_print_s(char *a);
int		ft_print_u(unsigned int a);

#endif