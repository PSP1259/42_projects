/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:48:18 by pspuhler          #+#    #+#             */
/*   Updated: 2026/06/24 15:24:07 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}

/*
int	main(void)
{
	int	c;
	int	d;

	c = 5;
	d = 10;
	printf("*main-version: a is %d and *b is %d\n\n", c, d);
	ft_swap(&c, &d);
	printf("after-swap: a is %d and b is %d", c, d);
	return (0);
}
*/
