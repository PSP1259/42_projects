/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 11:45:02 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/08 11:49:45 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char	text1[] = "Hola Malaga";
	char	text2[] = "Hola Malaga";
	int		result;

	result = ft_strcmp(text1, text2);
	printf("%i", result);
	return (0);
}
*/
