/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:36:17 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/11 11:46:53 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void	ft_putnbr(int nbr)
{
	long nr;
	char c;

	nr = nbr;
	if (nr < 0)
	{
		write(1, "-", 1);
		nr *= -1;
	}
	while (nr >= 10)
		ft_putnbr(nr / 10);
	c = (nr % 10) + '0';
	write(1, &c, 1);
}
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (!tab)
		return ;
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
int	main(void)
{
	int	numbers[] = {1, 2, 3, 4, 5};

	ft_foreach(numbers, 3, &ft_putnbr);
	return (0);
}
*/
