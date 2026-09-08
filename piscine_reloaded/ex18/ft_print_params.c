/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 11:50:38 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/08 12:07:52 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	iv;
	int	ic;

	if (argc < 1)
		return (0);
	ic = 1;
	while (ic < argc)
	{
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
