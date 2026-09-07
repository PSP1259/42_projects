/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 10:44:12 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/01 10:56:31 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	lend;
	unsigned int	i;

	lend = 0;
	while (dest[lend] != '\0')
	{
		lend++;
	}
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[lend] = src[i];
		i++;
		lend++;
	}
	dest[lend] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "Malaga";
	char	base[50] = "Hola ";
	char	*result;

	result = ft_strncat(base, src, 3);
	printf("%s", result);
	return (0);
}
*/
