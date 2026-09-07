/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 12:13:04 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/02 15:57:42 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	is;
	unsigned int	lens;
	unsigned int	lend;

	is = 0;
	lens = 0;
	lend = 0;
	while (src[lens] != '\0')
		lens++;
	while (dest[lend] != '\0')
		lend++;
	if (size <= lend)
		return (size + lens);
	while (src[is] && size > (lend + is + 1))
	{
		dest[lend + is] = src[is];
		is++;
	}
	dest[lend + is] = '\0';
	return (lend + lens);
}

/*
int	main(void)
{
	char	src[] = "es Philipp";
	char	dest[] = "Hola mi nombre ";
	unsigned int	result;

	result = ft_strlcat(dest, src, 3);
	
	printf("%s", dest);
	printf("\n%u", result); 
}
*/
