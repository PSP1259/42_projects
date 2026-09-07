/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 10:57:39 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/08 15:09:17 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (2);
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

/*
int	main(void)
{
	int	result;

	result = ft_find_next_prime(21);
	printf("%i", result);
	return (0);
}
*/
