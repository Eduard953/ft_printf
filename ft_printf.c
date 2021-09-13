/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:01:46 by ebeiline          #+#    #+#             */
/*   Updated: 2021/09/13 17:47:25 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	get_flag(const char *fmt, va_list args, int p_flag)
{
	if ((*fmt == 'i' || *fmt == 'd') && p_flag == 1)
		p_flag = ft_print_di(va_arg(args, int));
	else if (*fmt == 'c' && p_flag == 1)
		p_flag = ft_print_c(va_arg(args, int));
	else if (*fmt == 's' && p_flag == 1)
		p_flag = ft_print_s(va_arg(args, char *));
	else if (*fmt == 'p' && p_flag == 1)
		p_flag = ft_print_p(va_arg(args, unsigned long long));
	else if (*fmt == 'u' && p_flag == 1)
		p_flag = ft_print_u(va_arg(args, unsigned int));
	else if (*fmt == 'x' && p_flag == 1)
		p_flag = ft_print_x(va_arg(args, unsigned long long));
	else if (*fmt == 'X' && p_flag == 1)
		p_flag = ft_print_xup(va_arg(args, unsigned long long));
	else if (*fmt == '%' && p_flag == 2)
		p_flag = ft_print_perc();
	return (p_flag);
}

int	ft_printf(const char *fmt, ...)
{
	int		p_flag;
	int		ret;
	va_list	args;

	va_start(args, fmt);
	ret = 0;
	p_flag = 0;
	while (*fmt != '\0')
	{
		if (*fmt == '%')
			p_flag++;
		if (p_flag == 0)
			write(1, fmt, 1);
		p_flag = get_flag(fmt, args, p_flag);
		++fmt;
		++ret;
	}
	va_end(args);
	return (ret);
}
