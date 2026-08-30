/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 18:08:05 by pspuhler          #+#    #+#             */
/*   Updated: 2026/08/30 17:21:31 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list  *current;
    t_list  *next_node;

    if (!alst || !*alst)
        return ;
    current = *alst;
    while (current)
    {
        next_node = current->next;
        if (del)
            del(current->content, current->content_size);
        free(current);
        current = next_node;
    }
    *alst = 0;
}

void    del_content(void *content, size_t size)
{
    (void)size;
    if(content)
        free(content);
}

int main(void)
{
    t_list  *head;
    t_list  *second;

    head = ft_lstnew("First Node", 11);
    second = ft_lstnew("Second Node", 12);
    head->next = second;

    printf("Adresse von head vor ft_lstdel: %p\n", (void *)head);

    ft_lstdel(&head, &del_content);

    if (head == NULL)
        printf("head ist jetzt NULL. Alles sauber aufgeräumt!\n");

    return (0);
}
