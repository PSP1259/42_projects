/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:15:35 by pspuhler          #+#    #+#             */
/*   Updated: 2026/06/24 13:02:18 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	//char	strstr[] = "Hello Malaga";
	char	*strstr;
	int	result;

	strstr = "Hello Malaga";
	result = ft_strlen(strstr);
	printf("%i", result);
	return (0);
}
*/
