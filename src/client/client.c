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

void	ft_chartobin(int *binaryarray, char *chararray, int length)
{
    int i = 0;
	int	j = 7;
	char ch;
    while (i < length && chararray[i] != '\0')
	{
		j = 7;
        ch = chararray[i];
        while (j >= 0)
		{
            binaryarray[i * 8 + (7 - j)] = (ch >> j) & 1;
            j--;
        }
        i++;
    }
	return ;
}

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
    int *binarray;
    int len;
    int i;
    int j;

    i = 0;
    j = 1;
    len = ft_strlen(argv[2]);
    if (argc < 3)
        return (0);
    ft_printf("len es: %i\n", len);
    binarray = malloc(len * 8);
    pid = ft_atoi(argv[1]);
    ft_chartobin(binarray, argv[2], len);
    //send_string(pid, argv[2]); // Send string to child process
    kill(pid, SIGTERM); // Terminate child process
    //ft_printf("cantidad de variables: %i\nCon esta array: %s\n\n", argc, argv[2]);
    while (i < len * 8)
    {
        ft_printf("%d", binarray[i]);
        if (j == 8)
        {
            ft_printf(" ");
            j = 0;
        }
        i++;
        j++;
    }
    return(0);
}