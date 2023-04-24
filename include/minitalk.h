/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:23:14 by aldgonza          #+#    #+#             */
/*   Updated: 2023/04/19 15:16:34 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../dep/Libft/header/libft.h"
#include "../dep/Printf/include/ft_printf.h"
#include <unistd.h>
#include <signal.h>

#ifndef MINITALK_H
# define MINITALK_H

int ft_client(int argc, char **argv);
int ft_server();
#endif