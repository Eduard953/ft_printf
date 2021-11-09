/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:01:46 by ebeiline          #+#    #+#             */
/*   Updated: 2021/09/15 14:19:44 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	get_ret(const char *fmt, va_list args)
{
	int	ret;

	ret = 1;
	if ((*fmt == 'i' || *fmt == 'd'))
		ret = ft_print_di(va_arg(args, int));
	else if (*fmt == 'c')
		ret = ft_print_c(va_arg(args, int));
	else if (*fmt == 's')
		ret = ft_print_s(va_arg(args, char *));
	else if (*fmt == 'p')
		ret = ft_print_p(args, va_arg(args, unsigned long long));
	else if (*fmt == 'u')
		ret = ft_print_u(va_arg(args, unsigned int));
	else if (*fmt == 'x')
		ret = ft_print_x(va_arg(args, unsigned int));
	else if (*fmt == 'X')
		ret = ft_print_xup(va_arg(args, unsigned int));
	else if (*fmt == '%')
		ret = ft_print_perc();
	else
		write(1, fmt, 1);
	return (ret);
}

int	ft_printf(const char *fmt, ...)
{
	int		ret;
	va_list	args;

	va_start(args, fmt);
	ret = 0;
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == '\0')
				break ;
			ret += get_ret(fmt, args);
			va_arg(args, int); // poprobuj zapustit bez etoi stroki
		}
		else
		{
			write(1, fmt, 1);
			ret++;
		}
		++fmt;
	}
	va_end(args);
	return (ret);
}
