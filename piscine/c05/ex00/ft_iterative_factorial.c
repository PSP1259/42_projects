/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:48:08 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/07 17:52:25 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	int	number = 4;
	int	result;

	result = ft_iterative_factorial(number);
	printf("%i", result);
	return (0);
}
*/
