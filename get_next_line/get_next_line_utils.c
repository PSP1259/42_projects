/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler@student.42.fr <pspuhler>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 16:19:32 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/19 17:43:36 by pspuhler@st      ###   ########.fr       */
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

int	ft_strlen(char *s)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*strjoin_helper(char *stash, char *buffer, char *s3)
{
	int	i;
	int	j;

	i = 0;
	while (stash[i])
	{
		s3[i] = stash[i];
		i++;
	}
	j = 0;
	while (buffer[j])
	{
		s3[i] = buffer[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	char	*s3;

	if (!buffer)
		return (NULL);
	if (!stash)
	{
		stash = malloc(1);
		if (!stash)
			return (NULL);
		stash[0] = '\0';
	}
	s3 = malloc((ft_strlen(stash) + (ft_strlen(buffer) + 1) * sizeof(char)) * sizeof(char));
	if (!s3)
	{
		free(stash);
		return (NULL);
	}
	s3 = strjoin_helper(stash, buffer, s3);
	if (stash)
		free(stash);
	return (s3);
}
