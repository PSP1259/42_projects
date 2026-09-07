/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 14:49:01 by pspuhler          #+#    #+#             */
/*   Updated: 2026/06/24 18:43:26 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	aa;
	int	bb;

	aa = a;
	bb = b;
	*div = aa / bb;
	*mod = aa % bb;
}

/*
int	main(void)
{
	int	a1;
	int	b1;
	int	div1;
	int	mod1;

	a1 = 25;
	b1 = 3;
	ft_div_mod(a1, b1, &div1, &mod1);
	printf("Result div is %d\nResult mod is %i\n", div1, mod1);
	return (0);
}
*/
