/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fravasqu <fravasqu@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 16:16:06 by fravasqu          #+#    #+#             */
/*   Updated: 2026/06/28 22:23:03 by lucolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	**create_matrix(void)
{
	int	**matrix;
	int	x;
	int	y;

	matrix = malloc(4 * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	x = 0;
	while (x < 4)
	{
		matrix[x] = malloc(4 * sizeof(int));
		y = 0;
		while (y < 4)
		{
			matrix[x][y] = 0;
			y++;
		}
		x++;
	}
	return (matrix);
}

// avoid memory leak, to prevent run out of memory in heap
// inside-out methodi
void	delete_matrix(int **matrix)
{
	int	i;

	if (matrix == NULL)
		return ;
	i = 0;
	while (i < 4)
	{
		free(matrix[i]);
		i++;
	}
	free (matrix);
}

void	fill_strip(char *str, int *strip)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= '1' && str[a] <= '4')
		{
			strip[b] = str[a] - '0';
			b++;
		}
		a++;
	}
}

void	print_matrix(int **matrix)
{
	int		x;
	int		y;
	char	c;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			c = matrix[x][y] + '0';
			write(1, &c, 1);
			if (y < 3)
				write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}
