/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:37:12 by ebeiline          #+#    #+#             */
/*   Updated: 2021/09/08 15:53:08 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	rec_hex(unsigned long long a)
{
	int	remainder;
	int	w_int;

	remainder = a % 16;
	if (a / 16 != 0)
		rec_hex(a / 16);
	if (remainder < 10)
	{
		w_int = 48 + remainder;
		write(1, &w_int, 1);
	}
	else
	{
		w_int = 87 + remainder;
		write(1, &w_int, 1);
	}
	return (a / 16);
}

int	rec_hex_up(unsigned long long a)
{
	int	remainder;
	int	w_int;

	remainder = a % 16;
	if (a / 16 != 0)
		rec_hex_up(a / 16);
	if (remainder < 10)
	{
		w_int = 48 + remainder;
		write(1, &w_int, 1);
	}
	else
	{
		w_int = 55 + remainder;
		write(1, &w_int, 1);
	}
	return (a / 16);
}

int	ft_print_p(unsigned long long ptr)
{
	write(1, "0", 1);
	write(1, "x", 1);
	rec_hex(ptr);
	return (0);
}

int	ft_print_x(unsigned long long n)
{
	rec_hex(n);
	return (0);
}

int	ft_print_xup(unsigned long long n)
{
	rec_hex_up(n);
	return (0);
}
