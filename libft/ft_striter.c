/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 11:16:32 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/28 11:32:40 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	if (!f || !s)
		return ;
	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}

/*
static void	my_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Hola Malaga";

	ft_striter(str, my_upper);
	printf("%s", str);
	return (0);
}
*/
