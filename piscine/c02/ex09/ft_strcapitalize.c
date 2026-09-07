/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:59:19 by pspuhler          #+#    #+#             */
/*   Updated: 2026/06/29 18:33:32 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcapitalize_condition_uno(char *str, int i, int *capital)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (*capital == 1)
		{
			str[i] = str[i] - 32;
		}
		*capital = 0;
		return (1);
	}
	return (0);
}

int	ft_strcapitalize_condition_dos(char *str, int i, int *capital)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (*capital == 0)
		{
			str[i] = str[i] + 32;
		}
		*capital = 0;
		return (1);
	}
	return (0);
}

void	ft_strcapitalize_condition_tres(char *str, int i, int *capital)
{
	if (str[i] >= '0' && str[i] <= '9')
	{
		*capital = 0;
	}
	else
	{
		*capital = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capital;

	i = 0;
	capital = 1;
	while (str[i] != '\0')
	{
		if (ft_strcapitalize_condition_uno(str, i, &capital) == 0)
		{
			if (ft_strcapitalize_condition_dos(str, i, &capital) == 0)
			{
				ft_strcapitalize_condition_tres(str, i, &capital);
			}
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "hi, my Name 42is Philipp+Spuhler!test test";
	char	*result;

	result = ft_strcapitalize(str);
	printf("%s", result);
}
*/
