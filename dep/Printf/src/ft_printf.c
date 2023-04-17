/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:38:25 by aldgonza          #+#    #+#             */
/*   Updated: 2022/07/20 17:33:59 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	i;
	int		ret;
	va_list	arg;

	i = 0;
	ret = 0;
	va_start(arg, str);
	while (i < ft_strlen((char *)str))
	{
		if (str[i] == '%')
		{
			ret += ft_filter(arg, str[++i]);
			if (ret < 0)
				return (-1);
		}
		else
		{
			ret += ft_putchar_fd(str[i], 1);
			if (ret < 0)
				return (-1);
		}
		i++;
	}
	va_end(arg);
	return (ret);
}
