/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 03:54:19 by chaleirag14       #+#    #+#             */
/*   Updated: 2022/11/16 21:33:36 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	char	*p;
	int		i;

	p = s;
	i = 0;
	while (n > i)
	{
		p[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	buffer[100];

	ft_bzero(buffer, 20);
	printf("%d\n", buffer[5]);
}
*/