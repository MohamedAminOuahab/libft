/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 02:46:40 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/20 02:46:40 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strcat va concatene n cara de la src a dest
char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t dest_len;

    i = 0;
    dest_len = ft_strlen(dest);
    while (i < n && src[i])
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }
    dest[dest_len] = '\0';
    return (dest);
}