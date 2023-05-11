/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:59:37 by chaleirag14       #+#    #+#             */
/*   Updated: 2022/10/27 19:18:42 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	char	*p;
	int		i;

	p = s;
	i = 0;
	while (n > i)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/*
int	main(void)
{
	char	buffer[100];

	ft_memset(buffer, 100, 20);
	printf("%d\n", buffer[1]);
}
*/