/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 11:16:20 by pspuhler          #+#    #+#             */
/*   Updated: 2026/07/22 12:15:20 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*dd;
	const char	*ss;

	dd = (char *)dest;
	ss = (const char *)src;
	if (!dest && !src)
		return (0);
	if (len == 0 || dest == src)
		return (dest);
	while (len > 0)
	{
		if (*dd != *ss)
		{
			*dd = *ss;
		}
		dd++;
		ss++;
		len--;
	}
	return (dest);
}

/*
int main(void)
{
    char    src1[50] = "Hola Malaga";
    char    dest1[50] = "Old Text will be overwritten";

    ft_memcpy(dest1, src1, 8);
    printf("Test 1 (Normal copy): %s\n", dest1);

    char    src2[50] = "Will be ignored";
    char    dest2[50] = "Remain the same";

    ft_memcpy(dest2, src2, 0);
    printf("Test 2 (Len = 0): %s\n", dest2);

    int     src_arr[3] = {42, 1337, 84};
    int     dest_arr[3] = {0, 0, 0};

    ft_memcpy(dest_arr, src_arr, sizeof(src_arr));
    printf("Test 3 (Integer Array): %d, %d, %d\n", 
	dest_arr[0], dest_arr[1], dest_arr[2]);

    char    same_memory[50] = "Test for the same adress";
    
    ft_memcpy(same_memory, same_memory, 5);
    printf("Test 4 (Same adress): %s\n", same_memory);

    ft_memcpy(NULL, NULL, 0);
    printf("Test 5 (NULL Pointer with len 0): No crash!\n");

    return (0);
}
*/
