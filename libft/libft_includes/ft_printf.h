/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:42:11 by plopes-c          #+#    #+#             */
/*   Updated: 2023/01/04 15:46:43 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		ft_printf(const char *str, ...);
int		checknprint(va_list args, int i, const char *str);
int		ft_putnbr_base(unsigned long n, char *base);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);

#endif