/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:34:43 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/19 23:34:43 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*srcp;
	
	dst = (char *)dest;
	srcp = (const char *)src;
	if(dest == src)
		return dest;
	if (dst > srcp && dst < srcp + n)
	{
		i = n;
		while(i > 0)
		{
			dst[i] = srcp[i]; 
			--i;
		}
	}
	else 
	{
		i = 0;
		while(i < n)
		{
			dst[i] = srcp[i];
			i++;
		}
	}
	return dest;
}
