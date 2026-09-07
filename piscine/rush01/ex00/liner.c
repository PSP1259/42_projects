/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liner.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fravasqu <fravasqu@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 16:15:38 by fravasqu          #+#    #+#             */
/*   Updated: 2026/06/28 22:10:12 by lucolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	read_left_side(int **matrix, int row, int *line)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = matrix[row][i];
		i++;
	}
}

void	read_right_side(int **matrix, int row, int *line)
{
	int	i;
	int	j;

	i = 3;
	j = 0;
	while (i >= 0)
	{
		line[j] = matrix[row][i];
		i--;
		j++;
	}
}

void	read_top_side(int **matrix, int col, int *line)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		line[i] = matrix[i][col];
		i++;
	}
}

void	read_bottom_side(int **matrix, int col, int *line)
{
	int		i;
	int		j;

	i = 3;
	j = 0;
	while (i >= 0)
	{
		line[j] = matrix[i][col];
		i--;
		j++;
	}
}
