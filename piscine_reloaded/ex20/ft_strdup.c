/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 16:10:23 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/08 16:19:18 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		len;
	int		i;

	len = 0;
	while (src[len] != '\0')
		len++;
	new = malloc(len + 1 * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
#include <stdio.h>

int	main(void)
{
	char	text[12] = "Hola Malaga";
	char	*result;

	result = ft_strdup(text);
	printf("%s", result);
	free(result);
	return (0);
}
*/
