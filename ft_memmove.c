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
	char		*dst;
	const char	*srcp;

	dst = (char *)dest;
	srcp = (const char *)src;
	if (dest == src)
		return (dest);
	if (dst > srcp && dst < srcp + n)
	{
		dst += n;
		srcp += n;
		while (n-- > 0)
			*(--dst) = *(--srcp);
	}
	else
		while (n-- > 0)
			*dst++ = *srcp++;
	return (dest);
}
