/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 11:46:01 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/18 11:54:31 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	int				i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (ss1[i] == ss2[i] && ss1[i] != '\0' && ss2[i] != '\0')
		i++;
	return (ss1[i] - ss2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	text1[] = "Hola Malaga";
	const char	text2[] = "Hoaa Malaga";
	int			result;

	result = ft_strcmp(text1, text2);
	printf("%i", result);
	return (0);
}
*/
