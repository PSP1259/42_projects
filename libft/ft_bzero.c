/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 10:33:35 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/22 10:56:18 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = '\0';
		p++;
		len--;
	}
}

int	main(void)
{
	char	text[50] = "Hola Malaga";

	printf("Before: %s\n", text);
	ft_bzero(text, 1);
	printf("After: %s\n", &text[1]);
	return (0);
}
