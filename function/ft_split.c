/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:17:45 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/23 21:17:45 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_separator(char c, char charset) 
{
	if (c == charset)
		return (1);
    return (0);
}

static char	*ft_strndup(char const *src, size_t size)
{
	size_t 	i;
	char 	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * strlen(src) + 1);
	if (!dest)
		return NULL;
	while ((i < size) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_count_word(char const *str, char charset) 
{
    int count;
    int inside_word;

	count = 0;
	inside_word = 0;
    while (*str) 
	{
        if (ft_is_separator(*str, charset))
            inside_word = 0;
        else if (!inside_word) 
		{
            inside_word = 1;
            count++;
        }
        str++;
    }
    return (count);
}

char 	**ft_split(char const *str, char charset) 
{    
	int 	i;
	char 	*start;
    char 	**result;
	int 	count_word;
	int 	inside_word;

	i = 0;
	inside_word = 0;
	start = (char *)str;
	count_word = ft_count_word(str, charset);
	result = (char **)malloc(sizeof(char *) * (count_word + 1));
	if (!result)
        return NULL;
    while (*str)
	{
        if (ft_is_separator(*str, charset))
		{
            if (inside_word)
			{
                result[i++] = ft_strndup(start, (str - start));
                inside_word = 0;
            }
            start = (char *)str + 1;
        }
		else if (!inside_word)
		{
            inside_word = 1;
            start =  (char *)str;
        }
        str++;
    }
    if (inside_word)
        result[i++] = ft_strndup(start, (str - start));
    result[i] = NULL;
    return (result);
}
