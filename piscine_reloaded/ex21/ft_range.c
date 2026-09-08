/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 16:20:14 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/08 16:47:08 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long	diff;
	int		*new;
	long	i;

	diff = max - min;
	if (diff < 1)
	{
		new = NULL;
		return (new);
	}
	new = malloc(diff * sizeof(int));
	if (!new)
		return (NULL);
	i = 0;
	while (i < diff)
	{
		new[i] = min + i;
		i++;
	}
	return (new);
}

/*
#include <stdio.h>

int main(void)
{
    int *result;
    int i;
    int size;

    size = 5 - 10;
    result = ft_range(10, 5);
    if (!result)
        return (0);
    i = 0;
    while (i < size)
    {
        printf("%d\n", result[i]);
        i++;
    }
    free(result);
    return (0);
}
*/	
