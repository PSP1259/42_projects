/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:06:59 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/07 11:54:25 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_checker(char *base)
{
	int	a;
	int	b;

	a = 0;
	if (base[a] == '\0' || base[1] == '\0')
		return (0);
	while (base[a])
	{
		if (base[a] == '-' || base[a] == '+')
			return (0);
		a++;
	}
	b = a + 1;
	while (base[a])
	{
		while (base[a] != '\0')
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (a);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	number;
	int		len;

	len = 0;
	len = base_checker(base);
	if (len >= 2)
	{
		number = nbr;
		if (number < 0)
		{
			write(1, "-", 1);
			number = number * -1;
		}
		if (number >= len)
		{
			ft_putnbr_base(number / len, base);
		}
		write(1, &base[number % len], 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(255, "0123456789ABCDEF");
	return (0);
}
*/
