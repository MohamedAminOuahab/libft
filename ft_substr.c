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
	size_t	j;
	char	*str;

	i = 0;
	j = start;
	if (j > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if ((int)j < 0)
		j = ft_strlen(s) - j;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (len-- > 0 && s[j])
	{
		str[i] = s[j];
		i++;
		j++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	char	*mstr;

	mstr = NULL;
	if (ac == 4)
	{
		mstr = ft_substr(av[1] , ft_atoi(av[2]), ft_atoi(av[3]));
		free(mstr);
	}
	return (0);
}
