/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:36:01 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/24 12:58:33 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	new = malloc(size + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size + 1)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_strnew(6);
	printf("%s", result);
	free(result);
	return (0);
}
*/
