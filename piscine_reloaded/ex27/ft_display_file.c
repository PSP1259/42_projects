/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:55:16 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/11 13:43:17 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_argc_check(int argc)
{
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		filedescriptor;
	char	buffer[4096];
	int		bytes_read;

	if (ft_argc_check(argc) == 0)
		return (1);
	filedescriptor = open(argv[1], O_RDONLY);
	if (filedescriptor < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	bytes_read = read(filedescriptor, buffer, 4096);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(filedescriptor, buffer, 4096);
	}
	close(filedescriptor);
	return (0);
}
