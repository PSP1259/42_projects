/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:36:47 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/14 18:49:56 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- Line 28, 35: ft_putchar_fd()
*/

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	result;


	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	result = nbr % 10 + '0';
	write(fd, &result, 1);
}

int	main(void)
{
	int	number = -123456;

	ft_putnbr_fd(number, 1);
}
