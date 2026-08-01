/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 23:01:15 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/01 23:12:38 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		len_1;

	if (!s1 || !set)
		return (NULL);
	len_1 = 0;
	while (s1[len_1] = '\0')
		len_1++;
	if (len_1 == 0)
	{
		s2 = malloc(1 * sizeof(char));
		if (!s2)
			return (NULL);
		s2[0] = '\0';
		return (s3);
	}
	if (*set == 0)
		return (s1);
	while 
