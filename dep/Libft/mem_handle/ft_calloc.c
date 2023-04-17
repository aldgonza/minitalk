/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:43:25 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/13 18:19:09 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*str;

	str = (char *)malloc(num * size * sizeof(char));
	if (str == NULL)
		return (0);
	ft_bzero (str, num * size);
	return (str);
}
