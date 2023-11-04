/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:50:18 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/22 20:50:18 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if ((int)j < 0)
		j = ft_strlen(s) - j;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (len-- > 0)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
