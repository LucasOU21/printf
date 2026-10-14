/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luolivei <luolivei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 14:26:48 by luolivei          #+#    #+#             */
/*   Updated: 2026/07/07 16:42:29 by luolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);
int		ft_print_char(char c);
size_t	ft_strlen(const char *s);
int		ft_print_string(char *s);
int		ft_print_pointer(void *p);
int		ft_print_number(int num);
int		ft_print_ud(unsigned int num);
int		ft_print_xnu(unsigned int num);
int		ft_print_xnl(unsigned int num);

#endif