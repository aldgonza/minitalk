/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:42:12 by aldgonza          #+#    #+#             */
/*   Updated: 2022/07/20 18:05:23 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ifneg(int n)
{
	int	ret;

	ret = 0;
	if (n == -2147483648)
	{
		ret += write(1, "-2147483648", 11);
		if (ret < 0)
			return (-1);
		return (ret);
	}
	return (ret);
}

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

int	ft_putnbr_fd(int n, int fd)
{
	int	ret;

	ret = lenint(n);
	if (n == -2147483648)
		return (ft_ifneg(n));
	if (n < 0)
	{
		n = n * -1;
		if (ft_putchar_fd('-', fd) < 0)
			return (-1);
	}
	if (n >= 10)
	{
		if (ft_putnbr_fd(n / 10, fd) < 0)
			return (-1);
		n = n % 10;
	}
	if (n < 10)
	{
		if ((ft_putchar_fd(n + 48, fd)) < 0)
			return (-1);
	}
	return (ret);
}
