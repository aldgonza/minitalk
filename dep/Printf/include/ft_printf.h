/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:30:37 by aldgonza          #+#    #+#             */
/*   Updated: 2022/07/20 17:42:56 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include "../Libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_print_p(unsigned long long num);
int		ft_filter(va_list arg, const char keyword);
int		ft_unint(unsigned int n);
int		ft_hex(unsigned long long num, char key);
int		ft_printx(int x, char key);

#endif
