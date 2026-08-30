/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:41:26 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 17:53:17 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
    int i;

    if (!s1 || !s2)
        return (0);
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
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

    result = ft_strequ(s1, s2);
    printf("%i", result);
    return (0);
}
*/
