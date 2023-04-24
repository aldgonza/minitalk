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

static void	action(int sig, siginfo_t *info, void *context)
{
	static int				i = 0;
	static pid_t			client_pid = 0;
	static unsigned char	c = 0;

	(void)context;
	if (!client_pid)
		client_pid = info->si_pid;
	c |= (sig == SIGUSR2);
	if (++i == 8)
	{
		i = 0;
		if (!c)
		{
			kill(client_pid, SIGUSR2);
			client_pid = 0;
			return ;
		}
		ft_putchar_fd(c, 1);
		c = 0;
		kill(client_pid, SIGUSR1);
	}
	else
		c <<= 1;
}

int ft_server()
{
    int pid;
    struct sigaction    act;

    pid = getpid();
    ft_printf("Waiting for signal on PID: %i...\n", pid);
    //ft_memset(&act, 0, sizeof(act));
    act.sa_sigaction = action;
    act.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1, &act, NULL);
    sigaction(SIGUSR2, &act, NULL);
    while (1)
    {
      sleep(1); 
    }
    return (0);
}