/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:12:11 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/03 19:43:12 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && size - 1 > 0)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	src[] = "abcdefghijklmnopqrstuvxz";
	char	dest[6];

	ft_strlcpy(dest, src, sizeof(int) * 2);
	printf("%s\n", dest);
}
*/