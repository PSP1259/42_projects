/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 22:13:17 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/16 22:41:18 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcat(char *dst, const char *src)
{
	int	lend;
	int	i;

	lend = 0;
	while (dst[lend] != '\0')
		lend++;
	i = 0;
	while (src[i] != '\0')
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
	
	result = strcat(dst, base);
	printf("%s", result);
	return (0);
}
*/
