/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:16:42 by pspuhler          #+#    #+#             */
/*   Updated: 2026/06/30 17:09:38 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
	int i;     
	
	i = 0; 
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		}
	dest[i] = '\0';
	return (dest);
*/

/*
	int tmp;

	tmp = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (tmp)
*/

/*
int	main(void)
{
	char	str1[13] = "Hello Malaga";
	char	str2[13];
	char	*result;

	result = ft_strcpy(str2, str1);
	printf("%s", result);
	return (0);
}
*/
