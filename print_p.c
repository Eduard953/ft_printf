/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:22:13 by eduardbe          #+#    #+#             */
/*   Updated: 2021/11/22 16:55:35 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	rec_p(unsigned long long a, int *count)
{
	int	remainder;
	int	w_int;

	(*count)++;
	remainder = a % 16;
	if (a / 16 != 0)
		rec_p((a / 16), count);
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

int	ft_print_p(unsigned long long ptr)
{
	int		count;

	count = 0;
	write(1, "0", 1);
	write(1, "x", 1);
	rec_p(ptr, &count);
	return (count + 2);
}
