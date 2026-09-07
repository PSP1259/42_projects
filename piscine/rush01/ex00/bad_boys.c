/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bad_boys.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fravasqu <fravasqu@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 16:15:00 by fravasqu          #+#    #+#             */
/*   Updated: 2026/06/28 21:48:01 by lucolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	read_right_side(int **matrix, int row, int *line);
void	read_left_side(int **matrix, int row, int *line);
void	read_top_side(int **matrix, int row, int *line);
void	read_bottom_side(int **matrix, int row, int *line);
int		final_boss(int **matrix, int *strip);

int	guardiance(int **matrix, int row, int col, int number)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matrix[row][i] == number)
			return (0);
		else if (matrix[i][col] == number)
			return (0);
		i++;
	}
	return (1);
}

int	master_viewer(int *line, int for_real)
{
	int	i;
	int	max_size;
	int	visible_count;

	i = 0;
	max_size = 0;
	visible_count = 0;
	while (i < 4)
	{
		if (line[i] > max_size)
		{
			max_size = line[i];
			visible_count++;
		}
		i++;
	}
	if (visible_count == for_real)
		return (1);
	else
		return (0);
}

// Crawling the 16 slots over and over
int	recursion_badboy(int **matrix, int *strip, int pos)
{
	int	number;

	if (pos == 16)
		return (final_boss(matrix, strip));
	number = 1;
	while (number <= 4)
	{
		if (guardiance(matrix, pos / 4, pos % 4, number))
		{
			matrix[pos / 4][pos % 4] = number;
			if (recursion_badboy(matrix, strip, pos + 1))
				return (1);
			matrix[pos / 4][pos % 4] = 0;
		}
		number++;
	}
	return (0);
}

int	final_boss(int **matrix, int *strip)
{
	int	i;
	int	line[4];

	i = 0;
	while (i < 16)
	{
		if (i / 4 == 0)
			read_top_side(matrix, i % 4, line);
		else if (i / 4 == 1)
			read_bottom_side(matrix, i % 4, line);
		else if (i / 4 == 2)
			read_left_side(matrix, i % 4, line);
		else if (i / 4 == 3)
			read_right_side(matrix, i % 4, line);
		if (master_viewer(line, strip[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
