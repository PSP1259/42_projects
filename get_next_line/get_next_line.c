/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:43:07 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/16 15:54:56 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_and_stash(int fd, char *stash)
{
	char		*buffer;
	ssize_t		buffer_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(stash, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			free(stash);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}


	ptr = ft_strchr(stash, '\n');
	while (*line != '\n' && r != -1)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		
		new_line = ft_strjoin(line, new_line);
		if (read == 0)
			buffer[bytes_read] = '\0';
		bytes_read++;
	}
}

extract_line(char *new_line, )
{





		char *strchr(const char *s, int c);

	

char	*get_next_line(int fd)
{

}
