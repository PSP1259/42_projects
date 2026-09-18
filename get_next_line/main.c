#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		ofd;
	char	*line;

	ofd = open("test.txt", O_RDONLY);
	printf("fd from [open]: %i\n\n", ofd);
	if (ofd == -1)
	{
		perror("");
		return (1);
	}
	line = get_next_line(ofd);
	while (line != NULL)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(ofd);
	}
	close (ofd);
	return (0);
}
