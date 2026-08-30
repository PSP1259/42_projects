/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:35:16 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 18:16:28 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*
-> Without libft.h library:

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
*/

t_list *ft_lstnew(void const *content, size_t content_size)
{
    t_list *node;

    if (!(node = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    if (!content)
    {
        node->content = NULL;
        node->content_size = 0;
    }
    else
    {
        if (!(node->content = malloc(content_size)))
        {
            free(node);
            return (NULL);
        }
        ft_memcpy(node->content, content, content_size);
        node->content_size = content_size;
    }
    node->next = NULL;
    return (node);
}

/*
int	main(void)
{
	char	*str = "Hola Malaga";
	t_list	*result;

	result = ft_lstnew(str, 9);
	if (result)
	{
		printf("Content: %s\n", (char *)result->content);
		printf("Size: %zu\n", result->content_size);
		free(result);
	}
	return (0);
}
*/
