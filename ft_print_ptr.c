/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:43:35 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/24 15:46:22 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	unsigned long	adress;
	int				printed_chars;

	adress = (unsigned long)ptr;
	ft_print_str("0x");
	printed_chars = 2;
	printed_chars += ft_print_hex(address, 'x');
	return (printed_chars);
}