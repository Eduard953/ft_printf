/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:37:12 by ebeiline          #+#    #+#             */
/*   Updated: 2021/09/15 13:27:38 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	rec_hex(unsigned long long a, int *count)
{
	int	remainder;
	int	w_int;

	(*count)++;
	remainder = a % 16;
	if (a / 16 != 0)
		rec_hex((a / 16), count);
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
}

void	rec_hex_up(unsigned long long a, int *count)
{
	int	remainder;
	int	w_int;

	(*count)++;
	remainder = a % 16;
	if (a / 16 != 0)
		rec_hex_up((a / 16), count);
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
}

int	ft_print_p(unsigned long long ptr)
{
	int	count;

	count = 0;
	write(1, "0", 1);
	write(1, "x", 1);
	rec_hex(ptr, &count);
	return (count + 2);
}

int	ft_print_x(unsigned long long n)
{
	int	count;

	count = 0;
	rec_hex(n, &count);
	return (count);
}

int	ft_print_xup(unsigned long long n)
{
	int	count;

	count = 0;
	rec_hex_up(n, &count);
	return (count);
}
