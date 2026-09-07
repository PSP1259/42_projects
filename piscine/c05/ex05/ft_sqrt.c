/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 19:07:27 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/07 19:25:47 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb / i)
	{
		if (i * i == nb)
		{
			return (nb / i);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	int nb = 64;
	int	result;

	result = ft_sqrt(nb);
	printf("%i", result);
	return (0);
}
*/
