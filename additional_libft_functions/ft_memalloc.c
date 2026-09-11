/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:13:01 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 17:48:23 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*new;
	size_t	i;
	
	new = malloc(size);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
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

	result = ft_memalloc(8);
	printf("%s", result);
	free(new);
	return (0);
}
*/
