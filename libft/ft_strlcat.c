/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:35:49 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/03 19:43:01 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		n;
	size_t		dstlen;

	n = 0;
	dstlen = ft_strlen(dst);
	if (size <= dstlen)
		return (ft_strlen(src) + size);
	while (src[n] && size - dstlen - 1 > 0)
	{
		dst[dstlen + n] = src[n];
		n++;
		size--;
	}
	dst[dstlen + n] = '\0';
	return (dstlen + ft_strlen(src));
}
/*
int	main(void)
{
	char	src[] = "abcdefghijklmnopqrstuvxz";
	char	dest[] = "12345";

	ft_strlcat(dest, src, sizeof(char) * 4);
	printf("%s\n", dest);
}
*/