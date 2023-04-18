/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:21:17 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/18 17:36:47 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

int ft_client(int argc, char **argv)
{
    ft_printf("cantidad de variables: %i\nCon esta array: %s\n", argc, argv[1]);
    return(0);
}