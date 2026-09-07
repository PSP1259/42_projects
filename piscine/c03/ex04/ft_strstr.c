/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 10:57:42 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/01 19:51:42 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		a = 0;
		while (str[i + a] == to_find[a] && to_find[a] != '\0')
		{
			a++;
		}
		if (to_find[a] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	text[] = "Hola_mi_nombre_es_Philipp";
	char	text1[] = "Hola_mi_nombre_es_Philipp";
	char	text2[] = "Hola_mi_nombre_es_Philipp";
	char	search[] = "nombre";
	char	search1[] = "false";
	char	search2[] = "";
	char	*result;
	char	*result1;
	char	*result2;

	result = ft_strstr(text, search);
	printf("%s\n", result);
	result1 = ft_strstr(text1, search1);
	printf("%s\n", result1);
	result2 = ft_strstr(text2, search2);
	printf("%s\n", result2);
	return (0);
}
*/
