/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardbeiline <eduardbeiline@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:22:13 by eduardbeili       #+#    #+#             */
/*   Updated: 2021/11/09 14:32:59 by eduardbeili      ###   ########.fr       */
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

int	ft_print_p(va_list test, unsigned long long ptr)
{
	int		count;
	void	*p;
	va_list	ptr1;

	va_copy(ptr1, test);
	p = va_arg(test, void *);
	if (((void *)-1) == p)
	{
		va_end(ptr1);
		write(1, "0xffffffffffffffff", 18);
		return (18);
	}
	count = 0;
	write(1, "0", 1);
	write(1, "x", 1);
	rec_p(ptr, &count);
	return (count + 2);
}
