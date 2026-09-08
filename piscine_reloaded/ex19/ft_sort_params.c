/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:09:20 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/08 12:56:15 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		ic;
	int		iv;
	char	*tmp;

	if (argc < 1)
		return (0);
	ic = 0;
	tmp = "Hello";
	while (ic < argc)
	{
		if (argv[ic] > argv[ic + 1] && ic + 1 > argv)
		{
			tmp = argv[ic];
			argv[ic] = argv[ic + 1];
			argv[ic + 1] = tmp;
		}
		iv = 0;
		while (argv[ic][iv] != '\0')
		{
			ft_putchar(argv[ic][iv]);
			iv++;
		}
		ft_putchar('\n');
		ic++;
	}
	return (0);
}
