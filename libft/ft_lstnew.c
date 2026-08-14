/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:35:16 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/14 20:34:11 by pspuhler         ###   ########.fr       */
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
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		list->content = (void *)content;
		list->content_size = content_size;
	}
	list->next = NULL;
	return (list);
}

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
