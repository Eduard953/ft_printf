/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:45:56 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/08 21:39:58 by jguscins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_di(int a)
{
	char	*b;

	b = ft_itoa(a);
	a = ft_strlen(b);
	write(1, b, a);
	free(b);
	return (a);
}

int	ft_print_c(int a)
{
	write(1, &a, 1);
	return (1);
}

int	ft_print_perc(void)
{
	write(1, "%%", 1);
	return (1);
}

int	ft_print_s(char *a)
{
	if (!a)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, a, ft_strlen(a));
	return (ft_strlen(a));
}

int	ft_print_u(unsigned int a)
{
	char	*b;

	b = ft_utoa(a);
	a = ft_strlen(b);
	write(1, b, a);
	free(b);
	return (a);
}
