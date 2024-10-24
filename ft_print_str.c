/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:20:54 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/24 15:10:00 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(const char *str)
{
	if (!str)
	{
		ft_putstr("(null)");
		return ;
	}
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}