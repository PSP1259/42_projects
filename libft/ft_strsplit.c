/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 23:02:54 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/28 23:25:02 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count_word(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*get_next_word(char const **s, char c)
{
	char const	*start;
	char		*word;
	size_t		len;
	size_t		i;

	while (**s && **s == c)
		(*s)++;
	start = *s;
	len = 0;
	while (**s && **s != c)
	{
		len++;
		(*s)++;
	}
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	i = 0;
	while (i < len)
		word[i++] = *start++;
	word[i] = '\0';
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	words;
	size_t	i;

	if (!s)
		return (0);
	words = count_word(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < words)
	{
		tab[i] = get_next_word(&s, c);
		if (!tab[i])
		{
			while (i > 0)
				free(tab[--i]);
			free(tab);
			return (0);
		}
		i++;
	}
	tab[i] = 0;
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	char const	text[] = "Hola****Mal*Aga";
	char	**result;
	int		i;

	result = ft_strsplit(text, '*');
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
