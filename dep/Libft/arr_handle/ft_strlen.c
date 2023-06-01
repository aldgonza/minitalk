/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:50:40 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/13 18:22:28 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

size_t	ft_strlen(const char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
