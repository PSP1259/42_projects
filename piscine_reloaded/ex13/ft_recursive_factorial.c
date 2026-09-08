/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 09:54:24 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/08 10:35:26 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_recursive_factorial(5);
	printf("%i", result);
	return (0);
}
*/
