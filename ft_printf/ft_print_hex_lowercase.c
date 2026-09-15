/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lowercase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 20:48:58 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/14 16:05:23 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_lowercase(unsigned int n)
{
	int		count;
	char	*hex;
	char	c;

	hex = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_put_hex_lowercase(n / 16);
	c = hex[n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_print_hex_lowercase(va_list args)
{
	int				count;
	unsigned int	n;

	n = va_arg(args, unsigned int);
	count = ft_put_hex_lowercase(n);
	return (count);
}
