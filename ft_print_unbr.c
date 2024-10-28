/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:50:12 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/28 20:21:24 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_print_unbr(n / 10);
	count += ft_print_char((n % 10) + 0);
	return (count);
}