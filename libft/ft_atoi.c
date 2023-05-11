/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:23:43 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/12 21:35:29 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	s;
	int	nbr;

	i = 0;
	s = 1;
	nbr = 0;
	if (!ft_strncmp(nptr, "-2147483648", 11))
		return (-2147483648);
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nbr = nptr[i] - '0' + nbr * 10;
		i++;
	}
	return (nbr * s);
}

/*
 int	main(void)
 {
	const char str[] = "1234";

	printf("%d\n", ft_atoi(str));
	return (0);
 }
*/