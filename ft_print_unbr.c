/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:50:12 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/30 11:37:28 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unbr(unsigned int n)
{
	int	printed_chars;
	int	res;

	printed_chars = 0;
	if (n >= 10)
	{
		res = ft_print_unbr(n / 10);
		if (res == -1)
			return (-1);
		printed_chars += res;
	}
	if (ft_print_char((n % 10) + '0') == -1)
		return (-1);
	printed_chars++;
	return (printed_chars);
}
