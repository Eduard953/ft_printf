/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:37:12 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/22 16:55:31 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	rec_hex(unsigned int a, int *count)
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

void	rec_hex_up(unsigned int a, int *count)
{
	int	remainder;
	int	w_int;

	(*count)++;
	remainder = a % 16;
	if (a / 16)
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

int	ft_print_x(unsigned int n)
{
	int	count;

	count = 0;
	rec_hex(n, &count);
	return (count);
}

int	ft_print_xup(unsigned int n)
{
	int	count;

	count = 0;
	rec_hex_up(n, &count);
	return (count);
}
