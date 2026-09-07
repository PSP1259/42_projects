/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 09:27:46 by pspuhler          #+#    #+#             */
/*   Updated: 2026/06/30 09:56:13 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len])
	{
		len++;
	}
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*
int	main(void)
{
	char	src[] = "Hola Malaga";
	char	dest[30];
	unsigned int	result;
	unsigned int	input;

	input = 8;
	result = ft_strlcpy(dest, src, 8);
	printf("%u\n", result);
	printf("Copied string: %s, input was %u", dest, input);
}
*/
