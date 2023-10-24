/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:15:49 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/20 00:15:49 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t total_len;
    size_t copy_len; 

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    total_len = dst_len + src_len; 
    if (size <= dst_len)
        return src_len + size;
    copy_len = size - dst_len - 1; 
    ft_strncat(dst + dst_len, src, copy_len);
    dst[dst_len + copy_len] = '\0';
    return total_len;
}
