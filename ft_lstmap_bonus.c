/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:41:35 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/01 23:47:11 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lf(t_list *n_lst, void (*del)(void *))
{
	if (n_lst == NULL)
		return (NULL);
	ft_lstclear(&n_lst, del);
	return (NULL);
}

static void	ft_lts_init(t_list *n_el, t_list *lst, void *(*f)(void *))
{
	n_el->content = f(lst->content);
	n_el->next = NULL;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_tail;
	t_list	*new_element;

	new_tail = NULL;
	new_list = NULL;
	while (lst)
	{
		new_element = ft_lstnew(f(lst->content));
		if (new_element == NULL)
			return (ft_lf(new_list, del));
		ft_lts_init(new_element, lst, f);
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
	return (new_list);
}
