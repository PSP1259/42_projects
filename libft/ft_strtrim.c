/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 23:01:15 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/05 18:25:15 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- Failed by norminette: > 25 lines
- line 41: ft_strdup
- line 50: ft_strlen
- line 58: ft_substr
*/

#include <stdio.h>
#include <stdlib.h>

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	end = 0;
	while (s1[end])
		end++;
	while (end > start && is_set(s1[end - 1], set))
		end--;
	res = malloc((end - start + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

/*
int	main(void)
{
	const char	s1[] = "    xxxHola Malaga   x  x";
	const char	set[] = " x";
	char *result;

	result = ft_strtrim(s1, set);
	printf("%s", result);
	free(result);
	return (0);
}
*/
