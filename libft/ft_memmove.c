/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:59:19 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/22 18:25:37 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dd;
	const char	*ss;

	dd = (char *)dest;
	ss = (const char *)src;
	if (len == 0 || dest == src)
		return (dest);
	if (!dest || !src)
		return (0);
	if (dd > ss && dd < ss + len)
		while (len--)
			*(dd + len) = *(ss + len);
	else
	{
		while (len--)
		{
			*dd = *ss;
			dd++;
			ss++;
		}
	}
	return (dest);
}

/*
int main(void)
{
    char    src1[50] = "Hola Malaga";
    char    dest1[50] = "Old text will be overwritten";

    ft_memmove(dest1, src1, 12);
    printf("Test 1 (Normal copy): %s\n", dest1);

    char    overlap1[50] = "ABCDEFGHIJ";

    ft_memmove(overlap1 + 2, overlap1, 5);
    printf("Test 2 (Overlap): %s\n", overlap1);

    char    src2[50] = "Will be ignored";
    char    dest2[50] = "Remain the same";

    ft_memmove(dest2, src2, 0);
    printf("Test 3 (Len = 0): %s\n", dest2);

    char    same_memory[50] = "Test for the same adress";

    ft_memmove(same_memory, same_memory, 5);
    printf("Test 4 (Same adress): %s\n", same_memory);

    ft_memmove(NULL, same_memory, 5);
    printf("Test 5 (NULL Pointer with len 0): No crash!\n");

    return (0);
}
*/
