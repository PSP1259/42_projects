/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 13:45:55 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 17:57:15 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
! This version has > 25 lines (norminette fail), work with:
- line 31: ft_strlen(s)
- line 33: ft_sturdup("")
- line 47: ft_strlcpy(res, src, reslen)
*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if ((size_t)start >= s_len)
	{
		res = malloc(1 * sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (len > s_len - start)
		len = s_len - start;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
int	main(void)
{
	char const	text[] = "Hola Malaga";
	char	*result;

	result = ft_substr(text, 5, 12);
	printf("%s", result);
	free(result);
	return (0);
}
*/
