/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:43:35 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/30 12:17:53 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	printed_chars;
	int	res;

	printed_chars = 0;
	if (!ptr)
	{
		if (write(1, "0x0", 3) == -1)
			return (-1);
		return (3);
	}
	if (write(1, "0x", 2) == -1)
		return (-1);
	printed_chars += 2;
	res = ft_print_hex((unsigned long)ptr, 'x');
	if (res == -1)
		return (-1);
	printed_chars += res;
	return (printed_chars);
}
