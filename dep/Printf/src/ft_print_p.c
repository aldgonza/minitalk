/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:13:08 by aldgonza          #+#    #+#             */
/*   Updated: 2022/07/20 15:00:34 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_p(unsigned long long num)
{
	int		ret;

	ret = 0;
	ret += ft_putstr_fd("0x", 1);
	if (ret < 0)
		return (-1);
	if (num == 0)
	{
		ret += ft_putstr_fd ("0", 1);
		if (ret < 0)
			return (-1);
		return (ret);
	}
	ret += ft_hex(num, 'a');
	if (ret < 0)
		return (-1);
	return (ret);
}
