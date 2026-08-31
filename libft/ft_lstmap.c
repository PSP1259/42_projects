/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 17:33:56 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/31 16:42:51 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_lsit	*tail;
	t_list	*new_node;

	if (!lst || !f)
		return (0);
	head = 0;
	tail = 0;
	while (lst)
	{
		new_node = f(lst);
		if (!new_node)
		{
			while (head)
			{
				tail = head->next;
				free(head->content;
				free(head);
				head = tail;
			}
			return (0);
		}
		if (!head)
			head = new_node;
		else
			tail->next = new_node;
		tail = new_node;
		lst = lst->next;
		return (head)
	}
}
