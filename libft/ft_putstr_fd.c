/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 17:25:11 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/12 17:32:10 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- Line 25: ft_putchar()
*/

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

int	main(void)
{
	char	text[] = "Hola Malaga";

	ft_putstr_fd(text, 1);
	return (0);
}
