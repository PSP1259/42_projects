/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fravasqu <fravasqu@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 16:15:52 by fravasqu          #+#    #+#             */
/*   Updated: 2026/06/28 22:17:50 by lucolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		check_input(int argc, char **argv);
void	fill_strip(char *str, int *strip);
int		**create_matrix(void);
void	delete_matrix(int **matrix);
int		guardiance(int **matrix, int row, int col, int number);
void	print_matrix(int **matrix);
int		master_viewer(int *line, int for_real);
void	read_left_side(int	**matrix, int row, int *line);
void	read_right_side(int **matrix, int row, int *line);
void	read_top_side(int **matrix, int col, int *line);
void	read_bottom_side(int **matrix, int col, int *line);
int		recursion_badboy(int **matrix, int *strip, int pos);
int		final_boss(int **matrix, int *strip);

int	main(int argc, char **argv)
{
	int	strip[16];
	int	**matrix;

	if (check_input(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	fill_strip(argv[1], strip);
	matrix = create_matrix();
	if (matrix == NULL)
		return (1);
	if (recursion_badboy(matrix, strip, 0) == 1)
		print_matrix(matrix);
	else
		write(1, "Error\n", 6);
	delete_matrix(matrix);
	return (0);
}
