/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:45:56 by ebeiline          #+#    #+#             */
/*   Updated: 2021/09/13 16:47:34 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_di(int a)
{
	char	*b;

	b = ft_itoa(a);
	write(1, b, ft_strlen(b));
	return (0);
}

int	ft_print_c(int a)
{
	write(1, &a, 1);
	return (0);
}

int	ft_print_perc(void)
{
	write(1, "%%", 1);
	return (0);
}

int	ft_print_s(char *a)
{
	write(1, a, ft_strlen(a));
	return (0);
}

int	ft_print_u(unsigned int a)
{
	char	*b;

	b = ft_utoa(a);
	write(1, b, ft_strlen(b));
	return (0);
}
