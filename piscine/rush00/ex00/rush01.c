/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 12:59:50 by pspuhler          #+#    #+#             */
/*   Updated: 2026/06/20 20:38:42 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush_condition(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	rush_condition(x, y);
}

void	rush_condition(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (row == 1 && col == 1)
				ft_putchar('/');
			else if ((row == y && col == x) && (x > 1 && y > 1))
				ft_putchar('/');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('\\');
			else if (row != 1 && row != y && col != 1 && col != x)
				ft_putchar(' ');
			else
				ft_putchar('*');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
