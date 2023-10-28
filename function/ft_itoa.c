/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:37:10 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/28 20:37:10 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int	digit;

	digit = 0;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static void	ft_convert(int n, char *str, int count_d)
{
	while (n > 0)
	{
		str[--count_d] = '0' + n % 10;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		count_d;
	char	*str;

	count_d = ft_count_digit(n) + (n < 0);
	str = ft_calloc(count_d + 1, sizeof(char));
	if (n == 0)
	{
		str = malloc(sizeof(char ) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str[count_d] = '\0';
	if (!str)
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		str[--count_d] = -(n % 10) + '0';
		n = -(n / 10);
	}
	ft_convert(n, str, count_d);
	return (str);
}
