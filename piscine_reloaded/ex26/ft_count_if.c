/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:02:51 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/11 11:44:24 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	count_machine(char *ar)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (ar[i] != '\0')
	{
		if (ar[i] == '1')
			return (1);
		i++;
	}
	return (0);
}
*/

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!tab)
		return (0);
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str[] = {"123", "156", "111", "5", 0};
	int		result;

	result = ft_count_if(str, &count_machine);
	printf("%i", result);
	return (0);
}
*/
