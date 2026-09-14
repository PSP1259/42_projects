/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_uppercase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:48:33 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/14 13:08:19 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_uppercase(unsigned int n)
{
	int		count;
	char	*hex;
	char	c;
	
	count = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_put_hex_uppercase(n / 16);
	c = hex[n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_print_hex_uppercase(va_list args)
{
	int				count;
	unsigned int	n;

	n = va_arg(args, unsigned int);
	count = ft_put_hex_uppercase(n);
	return (count);
}
