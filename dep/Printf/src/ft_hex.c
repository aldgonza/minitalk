/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:01:07 by aldgonza          #+#    #+#             */
/*   Updated: 2022/07/20 15:00:02 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_len(unsigned long long num)
{
	int	ret;

	ret = 0;
	while (num != 0)
	{
		num /= 16;
		ret++;
	}
	return (ret);
}

int	ft_hex(unsigned long long num, char key)
{
	int	ret;

	ret = 0;
	if (num >= 16)
	{
		ft_hex(num / 16, key);
		ft_hex(num % 16, key);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchar_fd(num + '0', 1);
			if (ret < 0)
				return (-1);
		}
		else
		{
			ft_putchar_fd(((int)(num - 10 + key)), 1);
			if (ret < 0)
				return (-1);
		}
	}
	ret = ft_len (num);
	return (ret);
}
