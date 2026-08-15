/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 18:21:19 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/15 17:46:23 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c == 0)
		return (1);
	if (c >= 1 && c <= 127)
		return (c);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_isascii(111);
	printf("%i", result);
	return (0);
}
*/
