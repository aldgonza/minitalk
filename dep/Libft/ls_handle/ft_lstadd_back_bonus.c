/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:32:09 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/13 18:15:27 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_ls)
{
	t_list	*buff;

	buff = *lst;
	if (!new_ls)
		return ;
	if (!*lst)
	{
		*lst = new_ls;
		return ;
	}
	while (buff->next)
		buff = buff->next;
	buff->next = new_ls;
}
