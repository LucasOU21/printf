/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luolivei <luolivei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:56:21 by luolivei          #+#    #+#             */
/*   Updated: 2026/07/07 17:31:05 by luolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char		c;
	char		*s;
	int			n1;
	int			n2;
	int			n3;
	unsigned int u;
	int 		or;
	int 		ft;

	c = 'c';
	s = "Hello, world!";
	n1 = INT_MIN;
	n2 = INT_MAX;
	n3 = 0;
	u = 55;
	or = 0;
	ft = 0;

	printf("Mandatory test:\n\n");

	or = printf("Or %%c: %c ", c);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%c: %c ", c);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%s: %s ", s);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%s: %s ", s);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%d: %d - %d - %d ", n1, n2, n3);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%d: %d - %d - %d ", n1, n2, n3);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%i: %i - %i - %i ", n1, n2, n3);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%i: %i - %i - %i ", n1, n2, n3);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%x: %x - %x - %x ", n1, n2, n3);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%x: %x - %x - %x ", n1, n2, n3);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%X: %X - %X - %X ", n1, n2, n3);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%X: %X - %X - %X ", n1, n2, n3);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%u: %u ", u);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%u: %u ", u);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%p: %p ", &u);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%p: %p ", &u);
	printf("Return: %d\n", ft);

	printf("\n");

	printf("Mix printf:\n");
	or = printf("\nThis is a mix of tests\n%c and %s\n%d, %i and %u\n%x and %X\nfinishing with %p\n", c, s, n1, n2, u, n2, n2, &s);
	printf("\nReturn: %d\n", or);
	printf("\nMix ft_printf:\n");
	ft = ft_printf("\nThis is a mix of tests\n%c and %s\n%d, %i and %u\n%x and %X\nfinishing with %p\n", c, s, n1, n2, u, n2, n2, &s);
	printf("\nReturn: %d\n", ft);

	printf("\n");
}

	/*int		age;
	char	*name;

	age = 24;
	name = "Lucas Oliveira";
	printf("This is the result of the normal printf\n Age: %d\n and\n Name: %s\n", age, name);
	ft_printf("And this is the result of my printf\n");
	ft_printf("This is the result of my printf\n Age: %d\n and\n Name: %s", age, name);
	return (0);*/