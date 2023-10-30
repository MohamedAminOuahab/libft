/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 07:33:47 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/30 07:33:47 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_tail;
	t_list *new_element;

	new_tail = NULL;
	new_list = NULL;
    while (lst)
    {
        new_element = malloc(sizeof(t_list));
        if (new_element == NULL)
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        new_element->content = f(lst->content);
        new_element->next = NULL;
        if (new_element == NULL)
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        if (new_list == NULL)
        {
            new_list = new_element;
            new_tail = new_element;
        }
        else
        {
            new_tail->next = new_element;
            new_tail = new_element;
        }
        lst = lst->next;
    }
    return new_list;
}


