/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 09:36:59 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/08 11:29:59 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (0 < nb)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_iterative_factorial(3);
	printf("%i", result);
	return (0);
}
*/
