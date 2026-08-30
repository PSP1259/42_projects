/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 18:41:08 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 17:49:42 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	ch;

	p = (unsigned char *)b;
	ch = c;
	while (len > 0)
	{
		*p = ch;
		p++;
		len--;
	}
	return (b);
}

/*
#include <stdio.h>

int main(void)
{
	char	text[50] = "Hola Malaga";

	printf("Before: %s\n", text);
	ft_memset(text, 'X', 5);
	printf("After: %s\n\n", text);

	int	zahlen[5];
	
	ft_memset(zahlen, 0, sizeof(zahlen));
	printf("First: %d\n", zahlen[0]);
	printf("Last: %d\n", zahlen[4]);

	return (0);
}
*/
