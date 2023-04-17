/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:10:34 by aldgonza          #+#    #+#             */
/*   Updated: 2023/03/13 15:40:05 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

size_t	word_counter(const char *str, char car)
{
	size_t	i;
	size_t	mark;

	i = 0;
	mark = 0;
	while (str[i])
	{
		if (str[i] != car && (str[i + 1] == car || str[i + 1] == '\0'))
			mark++;
		i++;
	}
	return (mark);
}

void	freeall(char **ptr, size_t wcount)
{
	while (wcount > 0)
	{
		wcount--;
		free(ptr[wcount]);
	}
	free(ptr);
}

char	**fill_ptr(char const *src, char **dest, char c, size_t wcount)
{
	size_t	i;
	size_t	j;
	size_t	ptpos;

	i = 0;
	ptpos = 0;
	while (wcount > 0 && ptpos < wcount)
	{
		while (src[i] == c && src[i] != '\0')
			i++;
		j = i;
		while (src[j] != c && src[j] != '\0')
			j++;
		dest[ptpos] = (char *)ft_substr(src, i, j - i);
		if (!dest[ptpos])
		{
			freeall(dest, ptpos);
			return (NULL);
		}
		ptpos++;
		i = j;
	}
	dest[wcount] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	size_t	wcount;
	char	**ret;

	wcount = word_counter(s, c);
	ret = (char **)malloc((wcount + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	ret = fill_ptr(s, ret, c, wcount);
	return (ret);
}
