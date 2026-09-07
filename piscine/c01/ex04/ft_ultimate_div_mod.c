/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:19:58 by pspuhler          #+#    #+#             */
/*   Updated: 2026/06/24 18:47:23 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;
	int	bb;

	aa = *a / *b;
	bb = *a % *b;
	*a = aa;
	*b = bb;
}

/*
int	main(void)
{
	int	a1;
	int	b1;

	a1 = 50;
	b1 = 6;
	ft_ultimate_div_mod(&a1, &b1);
	printf("Result div(a): %i\nResult mod(b): %i", a1, b1);
	return (0);
}
*/
