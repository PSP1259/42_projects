/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 16:05:21 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 17:56:51 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0' && i < start)
		i++;
	if (i < start)
		len = 0;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
#include <stdio.h>

int	main(void)
{
	char const	text[] = "Hola Malaga";
	char		*result;

	result = ft_strsub(text, 5, 3);
	printf("%s", result);
	free(result);
	return (0);
}
*/
