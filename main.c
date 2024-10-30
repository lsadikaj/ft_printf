/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:08:50 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/30 16:10:05 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsadikaj <lsadikaj@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:00:00 by lsadikaj          #+#    #+#             */
/*   Updated: 2024/10/30 14:00:00 by lsadikaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int my_ret;
    int std_ret;

    // Testing %c
    char c = 'A';
    my_ret = ft_printf("ft_printf: Hello %c!\n", c);
    std_ret = printf("printf   : Hello %c!\n", c);
    printf("Return values: ft_printf = %d, printf = %d\n\n", my_ret, std_ret);

    // Testing %s
    char *str = "42 Lausanne";
    my_ret = ft_printf("ft_printf: This is %s!\n", str);
    std_ret = printf("printf   : This is %s!\n", str);
    printf("Return values: ft_printf = %d, printf = %d\n\n", my_ret, std_ret);

    // Testing %p
    void *ptr = &c;
    my_ret = ft_printf("ft_printf: Pointer address %p\n", ptr);
    std_ret = printf("printf   : Pointer address %p\n", ptr);
    printf("Return values: ft_printf = %d, printf = %d\n\n", my_ret, std_ret);

    // Testing %d and %i
    int num = 42;
    my_ret = ft_printf("ft_printf: Integer %d and %i\n", num, num);
    std_ret = printf("printf   : Integer %d and %i\n", num, num);
    printf("Return values: ft_printf = %d, printf = %d\n\n", my_ret, std_ret);

    // Testing %u
    unsigned int u_num = 42000;
    my_ret = ft_printf("ft_printf: Unsigned %u\n", u_num);
    std_ret = printf("printf   : Unsigned %u\n", u_num);
    printf("Return values: ft_printf = %d, printf = %d\n\n", my_ret, std_ret);

    // Testing %x and %X
    unsigned int hex_num = 255;
    my_ret = ft_printf("ft_printf: Hex (lower) %x and Hex (upper) %X\n", hex_num, hex_num);
    std_ret = printf("printf   : Hex (lower) %x and Hex (upper) %X\n", hex_num, hex_num);
    printf("Return values: ft_printf = %d, printf = %d\n\n", my_ret, std_ret);

    // Testing %%
    my_ret = ft_printf("ft_printf: Percent %%\n");
    std_ret = printf("printf   : Percent %%\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", my_ret, std_ret);

    // Additional complex mixed test
    my_ret = ft_printf("ft_printf: %c %s %p %d %i %u %x %X %%\n", c, str, ptr, num, num, u_num, hex_num, hex_num);
    std_ret = printf("printf   : %c %s %p %d %i %u %x %X %%\n", c, str, ptr, num, num, u_num, hex_num, hex_num);
    printf("Return values: ft_printf = %d, printf = %d\n", my_ret, std_ret);

    return (0);
}
