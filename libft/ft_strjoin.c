/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 22:26:04 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/01 22:59:53 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
! to many lines > 25 & variable declaration !
- line 33: ft_strlen(s1)...
- line 38: ft_calloc()
*/

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s3;
	int			len_1;
	int			len_2;
	int			size_3;
	int			start_1;
	int			start_2;

	if (!s1 || !s2)
		return (NULL);
	len_1 = 0;
	while (s1[len_1] != '\0')
		len_1++;
	len_2 = 0;
	while (s2[len_2] != '\0')
		len_2++;
	if (len_1 == 0 && len_2 == 0)
	{
		s3 = malloc(1 * sizeof(char));
		if (!s3)
			return (NULL);
		s3[0] = '\0';
		return (s3);
	}
	size_3 = len_1 + len_2 + 1;
	s3 = malloc(size_3 * sizeof(char));
	if (!s3)
		return (NULL);
	start_1 = 0;
	while (start_1 < len_1)
	{
		s3[start_1] = s1[start_1];
		start_1++;
	}
	start_2 = 0;
	while (start_2 < len_2)
	{
		s3[start_1] = s2[start_2];
		start_1++;
		start_2++;
	}
	s3[start_1] = '\0';
	return (s3);
}

/*
int	main(void)
{
	const char	text1[] = "Hola ";
	const char	text2[] = "Malaga";
	char		*result;

	result = ft_strjoin(text1, text2);
	printf("%s", result);
	free(result);
	return (0);
}
*/
