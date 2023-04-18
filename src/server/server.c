/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:38:49 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/18 18:39:02 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

void ft_sig_handler(int signo)
{
    if (signo == SIGINT)
    {
        ft_printf("\nExit SIGINT Recived!\n");
        exit(1);
    }
    return ;
}

int ft_server()
{
    int pid;

    pid = getpid();
    signal(SIGINT, ft_sig_handler);
    while (1)
    {
      ft_printf("Waiting for signal on PID: %i...\n", pid);
      sleep(2); 
    }
    return (0);
}