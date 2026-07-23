/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 17:12:16 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/23 17:45:46 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}

/*
int main(void)
{
	const char	*str = "Hola Malaga";
	char		*result;

	result = ft_strchr(str, 'a');
	printf("Test 1 (search 'a'):\n");
	if (result)
		printf("Found: %s\n\n", result);
	else
		printf("Not found!\n\n");

	result = ft_strchr(str, 'z');
	printf("Test 2 (search 'z'):\n");
	if (result)
		printf("Found: %s\n\n", result);
	else
		printf("Not found!\n\n");

	result = ft_strchr(str, '\0');
	printf("Test 3 (search '\\0'):\n");
	if (result)
		printf("Found Null-Byte %ld\n", result - str);
	else
		printf("Not found!\n");

	return (0);
}
*/
