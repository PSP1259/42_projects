/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 11:35:15 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/28 15:26:11 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		size;
	char	*new;

	if (!f || !s)
		return (NULL);
	size = 0;
	while (s[size] != '\0')
		size++;
	size++;
	new = malloc(sizeof(char) * size);
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
static char set_example(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

#include <stdio.h>

int	main (void)
{
	char const	text[] = "Hola Malaga";
	char		*result;

	result = ft_strmap(text, set_example);
	printf("%s", result);
	free(result);
	return (0);
}
*/
