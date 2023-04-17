/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:04:50 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/13 18:14:30 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_ls)
{
	if (!new_ls)
		return ;
	new_ls->next = *lst;
	*lst = new_ls;
}
