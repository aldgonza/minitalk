/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:23:14 by aldgonza          #+#    #+#             */
/*   Updated: 2023/06/07 18:30:05 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "../dep/Libft/header/libft.h"
# include "../dep/Printf/include/ft_printf.h"
# include <unistd.h>
# include <signal.h>

int		ft_client(int argc, char **argv);
void	ft_server(void);
#endif
