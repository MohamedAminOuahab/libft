/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:04:01 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/21 22:04:01 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
    while ((s1[i] && i < n) || (s2[i] && i < n))
    {
        if(s2[i] != s1[i])
            return (s1[i] - s2[i]);
        i++;    
    }
    return 0;
}