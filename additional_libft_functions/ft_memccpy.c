/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:12:29 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 18:04:23 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			ch;
	unsigned char			*dd;
	const unsigned char		*ss;

	dd = (unsigned char	*)dest;
	ss = (const unsigned char *)src;
	ch = c;
	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	if (!dest || !src)
		return (0);
	while (i < n)
	{
		*dd = *ss;
		if (*dd == ch)
		{
			dest = dd + 1;
			return (dest);
		}
		dd++;
		ss++;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	base[] = "Hola Malaga";
	char		dest[50] = "ABCDEFGHIJKLMNOP";

	ft_memccpy(dest, base, 'M', 12);
	printf("%s", dest);
	return (0);
}
*/
