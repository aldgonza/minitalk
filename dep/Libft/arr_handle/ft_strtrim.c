/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:17:35 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/13 18:22:45 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*newstr;

	end = ft_strlen(s1) - 1;
	start = 0;
	if (s1[0] == (char) NULL)
	{
		newstr = malloc(sizeof(char));
		if (!newstr)
			return (NULL);
		ft_strlcpy(newstr, "", 1);
		return (newstr);
	}
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	end = end - start + 1;
	newstr = ft_substr(s1, start, end);
	return (newstr);
}
