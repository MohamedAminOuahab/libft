/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:45:51 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/19 22:45:51 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// c'est une function qui va remplir le n case d'un tableaux
void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (!s)
		return (NULL);
	while (n-- > 0)
		*str++ = (unsigned char)c;
	return (s);
}
