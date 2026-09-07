/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:35:21 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/07 16:41:40 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	new;

	new = nb;
	if (new < 0)
	{
		ft_putchar('-');
		new = -new;
	}
	if (new >= 0 && new <= 9)
	{
		ft_putchar(new + '0');
	}
	if (new >= 10)
	{
		ft_putnbr(new / 10);
		ft_putnbr(new % 10);
	}
}

/*
int	main(void)
{
	int	number = -5641000;

	ft_putnbr(number);
	return (0);
}
*/
