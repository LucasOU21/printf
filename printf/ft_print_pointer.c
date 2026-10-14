/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luolivei <luolivei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:09:33 by luolivei          #+#    #+#             */
/*   Updated: 2026/10/03 14:39:04 by luolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex(unsigned long long num)
{
	char	*hexa;
	int		result;

	hexa = "0123456789abcdef";
	result = 0;
	if (num >= 16)
	{
		result += print_hex(num / 16);
	}
	result += write(1, &hexa[num % 16], 1);
	return (result);
}

int	ft_print_pointer(void *p)
{
	int	result;

	result = 0;
	if (!p)
	{
		return (write(1, "(nil)", 5));
	}
	result += write(1, "0x", 2);
	result += print_hex((unsigned long long)p);
	return (result);
}
