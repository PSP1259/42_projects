/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:37:36 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 17:46:49 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Without ft_bzero()

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*r;
	unsigned char	*rr;
	size_t			i;

	r = malloc(count * size);
	if (!r)
		return (NULL);
	i = 0;
	rr = (unsigned char *)r;
	while (i < (count * size))
	{
		rr[i] = '\0';
		i++;
	}
	return (r);
}

/*
int	main(void)
{
	char	*result;

	result = ft_calloc(5, 1);
	result[0] = 'A';
	result[1] = 'B';
	printf("%s", result);
	free(result);
	return (0);
}
*/
