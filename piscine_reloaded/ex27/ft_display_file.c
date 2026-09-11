/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:55:16 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/11 13:03:36 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fileDescriptor;
	char	buffer[4096];
	int		bytes_read;

	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	fileDescriptor = open(argv[1], O_RDONLY);
	if (fileDescriptor < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}

	while ((bytes_read = read(fileDescriptor, buffer, 4096)) > 0)
	{
		write(1, buffer, bytes_read);
	}
	close(fileDescriptor);
	return (0);
}
