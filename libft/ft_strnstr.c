/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:12:22 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/27 19:04:04 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	ib;
	size_t	il;

	if (*l == '\0')
		return ((char *)b);
	if (len == 0)
		return (0);
	ib = 0;
	while (ib < len && b[ib] != '\0')
	{
		il = 0;
		while (b[ib + il] != '\0' && l[il] != '\0'
			&& ib + il < len && b[ib + il] == l[il])
		{
			il++;
		}
		if (l[il] == '\0')
			return ((char *)&b[ib]);
		ib++;
	}
	return (0);
}

/*
int main(void)
{
	const char	big[] = "Hola Malaga";
	const char	little [] = "al";
	const char	*result;

	result = ft_strnstr(big, little, 13);
	printf("%s", result);
	return (0);
}
*/
