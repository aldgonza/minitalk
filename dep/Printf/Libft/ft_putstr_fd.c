/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:28:04 by aldgonza          #+#    #+#             */
/*   Updated: 2022/07/09 15:23:26 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	int		ret;

	i = 0;
	ret = 0;
	if (!s)
	{
		i += ft_putstr_fd("(null)", 1);
		return ((int) i);
	}
	while (s[i])
	{
		ret += ft_putchar_fd(s[i], fd);
		if (ret < 0)
			return (-1);
		i++;
	}
	return ((int)i);
}
