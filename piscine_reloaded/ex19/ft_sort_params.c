/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:09:20 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/08 16:03:25 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int	ic;
	int	iv;

	ic = 1;
	while (ic < argc)
	{
		iv = 0;
		while (argv[ic][iv] != '\0')
		{
			ft_putchar(argv[ic][iv]);
			iv++;
		}
		ic++;
		ft_putchar('\n');
	}
}

void	ft_sort_params(int argc, char **argv)
{
	int		ic;
	int		swapped;
	char	*tmp;

	tmp = "Hello";
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		ic = 0;
		while (ic < argc - 1)
		{
			if (ft_strcmp(argv[ic], argv[ic + 1]) > 0)
			{
				tmp = argv[ic];
				argv[ic] = argv[ic + 1];
				argv[ic + 1] = tmp;
				swapped = 1;
			}
			ic++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
