/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:20:54 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/29 10:29:02 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	printed_chars;

	if (!str)
		return (ft_print_str("(null)"));
	printed_chars = 0;
	while (str[printed_chars])
	{
		ft_print_char(str[printed_chars]);
		printed_chars++;
	}
	return (printed_chars);
}
