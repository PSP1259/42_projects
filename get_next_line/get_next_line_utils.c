/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 16:19:32 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/16 16:51:30 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	cc = (char)c;
	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

int	ft_strlen(char *c)
{
	int	len;

	len = 0;
	while (c[len])
		len++;
	return (len - 1);
}

char *ft_strjoin(char *stash, char *buffer)
{
	int		i;
	int		j;
	char	*s3;
	
	if (!buffer)
		return (NULL);
	s3 = malloc((ft_strlen[stash] + ft_strlen[buffer] + 1) * sizeof(char));

