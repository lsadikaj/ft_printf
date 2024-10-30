/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:23:15 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/30 11:46:02 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_positive_nbr(unsigned int n)
{
	int	printed_chars;
	int	res;

	printed_chars = 0;
	if (n >= 10)
	{
		res = ft_print_positive_nbr(n / 10);
		if (res == -1)
			return (-1);
		printed_chars += res;
	}
	if (ft_print_char((n % 10) + '0') == -1)
		return (-1);
	printed_chars++;
	return (printed_chars);
}

int	ft_print_nbr(int n)
{
	int	printed_chars;
	int	res;

	printed_chars = 0;
	if (n == -2147483648)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		if (ft_print_char('-') == -1)
			return (-1);
		n = -n;
		printed_chars++;
	}
	res = ft_print_positive_nbr(n);
	if (res == -1)
		return (-1);
	printed_chars += res;
	return (printed_chars);
}
