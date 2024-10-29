/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:50:12 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/29 10:29:41 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unbr(unsigned int n)
{
	int	printed_chars;

	printed_chars = 0;
	if (n >= 10)
		printed_chars += ft_print_unbr(n / 10);
	printed_chars += ft_print_char((n % 10) + '0');
	return (printed_chars);
}
