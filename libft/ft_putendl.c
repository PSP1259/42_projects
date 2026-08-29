/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 10:58:36 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/29 11:02:00 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	if (!s)
		return ;
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}

/*
int	main(void)
{
	char const	text[] = "Hola Malaga";

	ft_putendl(text);
	return (0);
}
*/
