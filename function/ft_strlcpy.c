/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:15:38 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/20 00:15:38 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t src_len;
    
    src_len = ft_strlen(src);
    if (size == 0)
        return src_len;
    if (size > src_len)
        size = src_len;
    ft_strncpy(dst, src, size);
    dst[size] = '\0';
    return src_len;
}