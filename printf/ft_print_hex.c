/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luolivei <luolivei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:27:19 by luolivei          #+#    #+#             */
/*   Updated: 2026/07/07 16:07:39 by luolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex(unsigned int num, char *hexa)
{
	int		result;

	result = 0;
	if (num >= 16)
	{
		result += print_hex(num / 16, hexa);
	}
	result += write(1, &hexa[num % 16], 1);
	return (result);
}

int	ft_print_xnu(unsigned int num)
{
	int	result;

	result = print_hex(num, "0123456789ABCDEF");
	return (result);
}

int	ft_print_xnl(unsigned int num)
{
	int	result;

	result = print_hex(num, "0123456789abcdef");
	return (result);
}
