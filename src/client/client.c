/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:21:17 by aldgonza          #+#    #+#             */
/*   Updated: 2023/06/07 18:31:17 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

void	ft_message(char ch, int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((ch & (1 << i)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i++;
	}
	return ;
}

int	ft_client(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc != 3)
		return (0);
	pid = ft_atoi(argv[1]);
	while (argv[2][i] != '\0')
	{
		ft_message(argv[2][i], pid);
		i++;
	}
	ft_message('\n', pid);
	return (0);
}
