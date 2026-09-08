/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 11:04:45 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/08 11:17:46 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while ((!(i * i == nb)) && i <= nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_sqrt(1);
	printf("%i", result);
	return (0);
}
*/
