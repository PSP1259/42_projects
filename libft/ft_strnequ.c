/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:41:47 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/28 15:47:55 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t i;

    if (!s1 || !s2)
        return (0);
    i = 0;
    while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
        i++;
	if (i == n)
		return (1);
    if (s1[i] != s2[i])
        return (0);
    return (1);
}

/*
#include <stdio.h>

int main(void)
{
    char const  s1[] = "Hola Malaga";
    char const  s2[] = "Hola Malaga";
    int         result;

    result = ft_strnequ(s1, s2, 5);
    printf("%i", result);
    return (0);
}
*/
