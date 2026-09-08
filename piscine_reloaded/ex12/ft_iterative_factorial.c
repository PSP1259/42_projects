/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 09:36:59 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/08 09:53:22 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 0;
	i = 0;
	while (i <= nb)
	{
		result = result + (i * nb);
		i++;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_iterative_factorial(1);
	printf("%i", result);
	return (0);
}
*/
