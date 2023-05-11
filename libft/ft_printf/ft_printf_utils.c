/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 23:09:19 by plopes-c          #+#    #+#             */
/*   Updated: 2023/01/04 15:44:48 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	int			i;
	size_t		len;

	i = 0;
	len = 0;
	while (base[len] && base)
		len++;
	if (n >= len)
		i += ft_putnbr_base(n / len, base);
	return (i + write(1, &base[n % len], 1));
}

int	ft_putstr(char *s)
{
	size_t	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (s && s[i])
		i++;
	return (write(1, s, i));
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr(int n)
{
	long		number;
	int			i;
	char		*str;

	i = 0;
	number = n;
	str = "0123456789";
	if (number < 0)
	{
		i = write(1, "-", 1);
		number = -number;
	}
	if (number >= 10)
		i += ft_putnbr((number / 10));
	return (i + ft_putchar(str[number % 10]));
}
