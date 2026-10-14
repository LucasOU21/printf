/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luolivei <luolivei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 14:36:56 by luolivei          #+#    #+#             */
/*   Updated: 2026/07/07 16:19:42 by luolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int num)
{
	char	c;
	long	n;
	int		result;

	n = num;
	result = 0;
	if (n < 0)
	{
		n *= -1;
		result += write(1, "-", 1);
	}
	if (n > 9)
	{
		result += ft_print_number(n / 10);
	}
	c = n % 10 + '0';
	result += write(1, &c, 1);
	return (result);
}

int	ft_print_ud(unsigned int num)
{
	char	c;
	int		result;

	result = 0;
	if (num > 9)
	{
		result += ft_print_number(num / 10);
	}
	c = num % 10 + '0';
	result += write(1, &c, 1);
	return (result);
}
