/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:21:17 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/19 16:37:00 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

void    send_string(pid_t pid, const char* str) 
{
    int len;
    int i;

    i = 0;
    len = ft_strlen(str);
    kill(pid, SIGUSR1); // Send signal to process with pid
    usleep(1000); // Wait for receiver to set up signal handler
    kill(pid, SIGUSR2); // Send signal to start data transfer

    while (i < len) {
        kill(pid, (str[i] << 8) | SIGUSR1); // Send each byte of string as a signal
        usleep(1000); // Wait for receiver to process signal
        i++;
    }
    kill(pid, SIGUSR2); // Send signal to end data transfer
}

int ft_client(int argc, char **argv)
{
    int pid;

    pid = ft_atoi(argv[1]);
    //send_string(pid, argv[2]); // Send string to child process
    kill(pid, SIGTERM); // Terminate child process
    ft_printf("cantidad de variables: %i\nCon esta array: %s\n", argc, argv[1]);
    return(0);
}