/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:23:15 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/29 10:30:09 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int	printed_chars;

	printed_chars = 0;
	if (n == -2147483648)
		return (ft_print_str("-2147483648"));
	if (n < 0)
	{
		printed_chars += ft_print_char('-');
		n = -n;
	}
	if (n >= 10)
		printed_chars += ft_print_nbr(n / 10);
	printed_chars += ft_print_char((n % 10) + '0');
	return (printed_chars);
}
