/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 16:28:51 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/01 10:43:18 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lend;

	lend = 0;
	while (dest[lend] != '\0')
	{
		lend++;
	}
	i = 0;
	while (src[i] != '\0')
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

	result = ft_strcat(base, src);
	printf("%s", result);
	return (0);
}
*/
