/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:25:13 by plopes-c          #+#    #+#             */
/*   Updated: 2023/01/04 15:44:55 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	size_t		i;
	int			re;

	i = 0;
	re = 0;
	va_start(args, str);
	while (str[i] && str)
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			re++;
		}
		else
			re += checknprint(args, ++i, str);
		i++;
	}
	va_end(args);
	return (re);
}

int	checknprint(va_list args, int i, const char *str)
{
	size_t	p;

	if (str[i] == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned), "0123456789"));
	if (str[i] == 'd' || str[i] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (str[i] == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (str[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (str[i] == '%')
		return (write(1, "%", 1));
	if (str[i] == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	if (str[i] == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	if (str[i] == 'p')
	{
		p = va_arg(args, unsigned long int);
		if (!p)
			return (write(1, "(nil)", 5));
		return (write(1, "0x", 2) + ft_putnbr_base(p, "0123456789abcdef"));
	}
	return (0);
}
