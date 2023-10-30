/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:24:47 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/29 21:24:47 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
* @param lst :  adrress du pointeur vers le premier element de la list
* @param new : 	adresse du noeud a ajouter en debut de liste
* @return rien
* @details : ajoute l'element 'new' au debut de la liste 
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = (*lst);
	*lst = new;
}