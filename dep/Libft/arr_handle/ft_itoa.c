/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:16:11 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/13 18:21:48 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	lenint(int n)
{
	int	i;
	int	nn;

	i = 0;
	nn = n;
	if (n == 0)
	{
		i++;
		return (i);
	}
	if (n < 0)
	{
		nn = nn * -1;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*fill(char *str, int n, int len)
{
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	while (n)
	{
		str[len - 1] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}

char	*neg(char *str)
{
	ft_strlcpy(str, "-2147483648", 12);
	if (!str)
		return (NULL);
	return (str);
}

char	zero(char *str)
{
	str[0] = '0';
	str[1] = '\0';
	return (*str);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		len;

	if (n == -2147483648)
	{
		ret = malloc(12 * sizeof(char));
		if (!ret)
			return (NULL);
		ret = neg(ret);
		return (ret);
	}
	len = lenint(n);
	ret = malloc(len + 1 * sizeof(char));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	if (n == 0)
	{
		zero(ret);
		return (ret);
	}
	ret = fill (ret, n, len);
	return (ret);
}
