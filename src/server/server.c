/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:38:49 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/24 17:12:07 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

int ft_server()
{
    int pid;

    pid = getpid();
    ft_printf("Waiting for signal on PID: %i...\n", pid);
    while (1)
    {
      sleep(1); 
    }
    return (0);
}