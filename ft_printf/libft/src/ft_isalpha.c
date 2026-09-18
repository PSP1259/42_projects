/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 15:08:21 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 17:47:16 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    int result;

    result = ft_isalpha(68);
    printf("%i", result);
    return (0);
}
*/
