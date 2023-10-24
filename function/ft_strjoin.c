/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:56:30 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/20 19:56:30 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t 	len;
	size_t	len_s1;
	size_t	len_s2;
	char	*str;

	len_s1 = (!s1) ? 0 : strlen(s1);
	len_s2 = (!s2) ? 0 : strlen(s2);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if	(!str)
		return NULL;
	ft_strncpy(str, s1, len_s1);
	ft_strncat(str, s2, len_s2);
	return (str);
}