/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:24:58 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/29 21:24:58 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @param lst : le debut de la lst
* @return : le dernier element de la lst
*/

t_list	*ft_lstlast(t_list	*lst)
{
	if(!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}