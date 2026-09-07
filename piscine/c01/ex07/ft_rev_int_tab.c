/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:55:59 by pspuhler          #+#    #+#             */
/*   Updated: 2026/06/24 15:29:30 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	length;

	i = 0;
	length = size -1;
	while (i < length)
	{
		tmp = tab[i];
		tab[i] = tab[length];
		tab[length] = tmp;
		i++;
		length--;
	}
}

/*
int	main(void)
{
	int text[5] = {5, 6, 7, 8, 9};
	ft_rev_int_tab(text, 5);

	printf("%i, %i, %i, %i, %i", text[0], text[1], text[2], text[3], text[4]);
	return (0);
}
*/
