/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:58:10 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/28 11:04:24 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	while (*s)
	{
		*s = '\0';
		s++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	text[] = "Hola Malaga";

	ft_strclr(text);
	printf("%s", text);
	return (0);
}
*/
