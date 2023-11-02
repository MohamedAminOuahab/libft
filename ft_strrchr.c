/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:28:21 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/22 14:28:21 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const	*str, int c)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)&str[i]);
	while (--i >= 0)
		if (s[i] == (unsigned char )c)
			return ((char *)&s[i]);
	return (NULL);
}
