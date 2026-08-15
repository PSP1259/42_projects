/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:54:36 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/15 17:37:10 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (c);
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_isdigit(52);
	printf("%i", result);
	return (0);
}
*/
