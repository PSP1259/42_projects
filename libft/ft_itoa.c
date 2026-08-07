/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 18:18:14 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/07 18:59:35 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_itoa converts the integer n into a string of characters.

	RESULT VALUE :
	The string of the converted integer.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static size_t	ft_itoa_len(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
	{
		return (1);
	}
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num >= 1)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static char	*ft_num_to_str(long num, char *str, size_t len)
{
	str = calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	len--;
	while (len)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (str[0] != '-')
		str[0] = (num % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*str;

	num = n;
	len = ft_itoa_len(num);
	str = 0;
	str = ft_num_to_str(num, str, len);
	if (!str)
		return (NULL);
	return (str);
}

int	main(void)
{
	char *str;

	str = ft_itoa(42);
	printf("Test 42: %s\n", str);
	free(str);

	str = ft_itoa(-42);
	printf("Test -42: %s\n", str);
	free(str);

	str = ft_itoa(0);
	printf("Test 0: %s\n", str);
	free(str);

	str = ft_itoa(INT_MIN);
	printf("Test INT_MIN: %s\n", str);
	free(str);

	str = ft_itoa(INT_MAX);
	printf("Test INT_MAX: %s\n", str);
	free(str);

	return (0);
}
