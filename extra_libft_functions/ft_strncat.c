/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 22:22:19 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 17:55:12 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*strncat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	i;

	lend = 0;
	while (dst[lend] != '\0')
		lend++;
	i = 0;
	while (i < size && src[i] != '\0')
	{
		dst[lend] = src[i];
		lend++;
		i++;
	}
	dst[lend] = '\0';
	return (dst);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	base[] = "Malaga";
	char		dst[50] = "Hola ";
	char		*result;

	result = strncat(dst, base, 3);
	printf("%s", result);
	return (0);
}
*/
