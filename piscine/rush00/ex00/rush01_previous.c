/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 12:59:50 by pspuhler          #+#    #+#             */
/*   Updated: 2026/06/20 16:18:46 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row; 
	int	col; 

	// To prevent negative inputs
	if (x <= 0 || y <= 0)
	{
		return;
	}

	// Start on the first row
	row = 1;

	// Top down approach ↓
	while (row <= y)
	{
		col = 1; // For every row we begin in column 1

		// While column is lower than x
		while (col <= x)
		{
			if (row == 1 && col == 1)
			{
				ft_putchar('/');
			}
			else if (row == 1 && col == x)
			{
				ft_putchar('\\');
			} 
			else if (row != 1 && row != y && col != 1 && col != x)
			{
				ft_putchar(' ');
			}
			else if (row == 1 && col != x && col != 1)
			{
				ft_putchar('*');
			}
			else if (col == 1 && col != x && row != y)
			{
				ft_putchar('*');
			}
			else if (row == y && col != 1 && col != x)
			{
				ft_putchar('*');
			}
			else if (col == x && row != 1 && row != y)	
			{
				ft_putchar('*');
			}
			else if (col == 1 && row == y)
			{
				ft_putchar('\\');
			}
			else if (col == x && row == y)
			{
				ft_putchar('/');
			}
			else
			{
				ft_putchar('X');
			}
			col++;
		}

		ft_putchar('\n');
		row++;
	}
}
