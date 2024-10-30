/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:16:28 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/30 11:47:27 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, char format)
{
	char	*base;
	int		printed_chars;
	int		res;

	printed_chars = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		res = ft_print_hex(n / 16, format);
		if (res == -1)
			return (-1);
		printed_chars += res;
	}
	if (ft_print_char(base[n % 16]) == -1)
		return (-1);
	printed_chars++;
	return (printed_chars);
}
