/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:15:02 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/13 18:22:02 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strdup(const char *s)
{
	size_t	strl;
	char	*sdup;

	strl = ft_strlen(s);
	sdup = (char *)malloc(strl + 1);
	if (sdup != NULL)
	{
		ft_strlcpy(sdup, (char *)s, strl + 1);
		return (sdup);
	}
	return (0);
}
