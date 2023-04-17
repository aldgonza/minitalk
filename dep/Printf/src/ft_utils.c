/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:24:42 by aldgonza          #+#    #+#             */
/*   Updated: 2022/07/20 16:38:03 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_filter(va_list arg, const char keyword)
{
	int		ret;

	ret = 0;
	if (keyword == 'c')
		ret += ft_putchar_fd(va_arg(arg, int), 1);
	else if (keyword == 's')
		ret += ft_putstr_fd(va_arg(arg, char *), 1);
	else if (keyword == 'p')
		ret += ft_print_p(va_arg(arg, unsigned long long));
	else if (keyword == 'i' || keyword == 'd')
		ret += ft_putnbr_fd(va_arg(arg, int), 1);
	else if (keyword == 'u')
		ret += ft_unint(va_arg(arg, unsigned int));
	else if (keyword == 'x')
		ret += ft_printx(va_arg(arg, unsigned long long), 'x');
	else if (keyword == 'X')
		ret += ft_printx(va_arg(arg, unsigned long long), 'X');
	else if (keyword == '%')
		ret += ft_putchar_fd('%', 1);
	return (ret);
}
