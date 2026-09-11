/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 16:03:46 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 18:07:18 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *h, const char *n)
{
	int		base;
	int		find;
	char	*hh;
	char	*nn;

	hh = (char *)h;
	nn = (char *)n;
	base = 0;
	if (*nn == '\0')
		return (hh);
	while (hh[base] != '\0')
	{
		find = 0;
		while (hh[base + find] == nn[find] && nn[find] != '\0')
			find++;
		if (nn[find] == '\0')
			return (&hh[base]);
		base++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	base[] = "Hola Malaga";
	const char	find[] = "Mal";
	char		*result;

	result = ft_strstr(base, find);
	printf("%s", result);
	return (0);
}
*/
