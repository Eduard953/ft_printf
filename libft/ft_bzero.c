/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:08:55 by ebeiline          #+#    #+#             */
/*   Updated: 2021/06/07 17:26:08 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *src, size_t n)
{
	unsigned char	*pointer;

	pointer = (unsigned char *) src;
	while (n)
	{
		*(pointer) = '\0';
		n--;
		pointer++;
	}
}
