/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:49:02 by aldgonza          #+#    #+#             */
/*   Updated: 2022/07/20 17:14:03 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

int	ft_positive(unsigned int n)
{
	int	ret;

	ret = 0;
	if (n >= 10)
	{
		ret += ft_putnbr_fd(n / 10, 1);
		if (ret < 0)
			return (-1);
		n = n % 10;
	}
	if (n < 10)
	{
		ret += ft_putchar_fd(n + 48, 1);
		if (ret < 0)
			return (-1);
	}
	return (ret);
}

int	ft_unint(unsigned int n)
{
	int				ret;
	unsigned int	un;

	ret = 0;
	un = 4294967295;
	if (n < 0)
	{
		un = n - un;
		ret += ft_unint(un);
	}
	if (n >= 0)
		ret += ft_positive(n);
	return (ret);
}
