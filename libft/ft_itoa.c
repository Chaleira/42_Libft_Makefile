/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:34:34 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/10 20:54:51 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_second_itoa(long n, char *str, int i)
{
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_second_itoa (n % 10, str, i);
		ft_second_itoa (n / 10, str, i - 1);
	}
	if (n < 10)
		str[i] = n + '0';
	return (str);
}

size_t	ft_calloc_size(long n)
{
	int		i;
	long	dup;

	i = 0;
	dup = n;
	if (dup < 0)
	{
		dup = dup * -1;
		i++;
	}
	while (dup > 9)
	{
		dup = dup / 10;
		i++;
	}
	if (dup <= 9)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	long	nbr;

	nbr = n;
	i = ft_calloc_size(nbr);
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (0);
	str = ft_second_itoa(nbr, str, i - 1);
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(-2147483647 -3));
	return (0);
}
*/