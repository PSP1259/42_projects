/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 11:54:55 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/07 13:38:24 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	base_checker(char *base)
{
	int	a;
	int	b;

	a = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[a] != '\0')
	{
		if (base[a] == '-' || base[a] == '+' || base[a] == ' '
			|| (base[a] >= 9 && base[a] <= 13))
			return (0);
		b = a + 1;
		while (base[b] != '\0')
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (a);
}

int	char_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;
	int	b_len;

	i = 0;
	result = 0;
	sign = 1;
	b_len = base_checker(base);
	if (b_len < 2)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (char_value(str[i], base) != -1)
	{
		result = (result * b_len) + char_value(str[i], base);
		i++;
	}
	return (result * sign);
}

/*
int	main(void)
{
	char	str[] = "FF";
	char	base[] = "0123456789ABCDEF";
	int	result;

	result = ft_atoi_base(str, base);
	printf("%d", result);
	return (0);
}
*/
