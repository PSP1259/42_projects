/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 11:40:18 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/15 16:46:32 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1. Check if alst || *alst exist
2. Use delete function (definded outside of this function)
3. Free the block
4. Pointer set to NULL to avoid crashes
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !*alst)
		return ;
	if (del)
		del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}

//---Test the function---

void	del_content(void *content, size_t size)
{
	(void)size;
	if (content)
	{
		free(content);
		printf("Successfull deleted");
	}
}

int	main(void)
{
	t_list	*elem;
	char	*text;

	text = ft_strdup("Hola Malaga");
	if (!text)
		return (1);
	elem = ft_lstnew(text, 9);
	if (!elem)
	{
		free(text);
		return (1);
	}
	printf("Before modification, Content: %s\n\n", (char *)elem->content);
	printf("Pointer adress: %p\n\n", (void *)elem);

	//Important: & -> because double pointer **
	ft_lstdelone(&elem, del_content);

	printf("After deletion:\n");
	if (elem == NULL)
		printf("Pointer is NULL -> correct");
	else
		printf("Pointer is not NULL -> failed");
	return (0);
}

	
