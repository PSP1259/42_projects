/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:37:36 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/23 14:57:20 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Without ft_bzero()

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*r;
	unsigned char	*rr;
	size_t			i;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	r = malloc(nmemb * size);
	if (!r)
		return (NULL);
	i = 0;
	rr = (unsigned char *)r;
	while (i < (nmemb * size))
	{
		rr[i] = '\0';
		i++;
	}
	return (r);
}

/*
int	main(void)
{
	char	*result;

	result = ft_calloc(5, 1);
	result[0] = 'A';
	result[1] = 'B';
	printf("%s", result);
	free(result);
	return (0);
}
*/
