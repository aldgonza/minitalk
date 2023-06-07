/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:38:49 by aldgonza          #+#    #+#             */
/*   Updated: 2023/06/07 18:30:20 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

void	ft_sighandle(int sig)
{
	static int	i;
	static int	ch;

	if (sig == SIGUSR1)
		ch += (1 << i);
	i++;
	if (i == 8)
	{
		ft_printf("%c", ch);
		i = 0;
		ch = 0;
	}
	return ;
}

void	ft_server(void)
{
	int	pid;

	pid = getpid();
	ft_printf("Waiting for signal on PID: %i...\n", pid);
	while (1)
	{
		signal(SIGUSR1, ft_sighandle);
		signal(SIGUSR2, ft_sighandle);
		pause ();
	}
	return ;
}
