/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 20:27:28 by pspuhler          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/09/18 16:52:26 by pspuhler         ###   ########.fr       */
=======
/*   Updated: 2026/09/14 14:16:07 by pspuhler         ###   ########.fr       */
>>>>>>> b2dca21d4e99ebc65f601c70b3b8b44809d76ccb
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_unsigned(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += ft_put_unsigned(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_print_unsigned(va_list args)
{
	int				count;
	unsigned int	n;

	n = va_arg(args, unsigned int);
	count = ft_put_unsigned(n);
	return (count);
}
