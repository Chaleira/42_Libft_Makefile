/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:13:20 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/04 19:09:22 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	llen;

	i = 0;
	llen = ft_strlen(little);
	if (little[0] == '\0')
		return (((char *)big));
	while (big[i] != '\0' && i < len - llen + 1 && len >= llen)
	{
		n = 0;
		while (big[i + n] == little[n] && n < llen)
		{
			n++;
		}
		if (n == llen)
			return (&((char *)big)[i]);
		i++;
	}
	return (NULL);
}

/* 
int	main(void)
{
	char	str[] = "aaabcabcd";
	char	str2[] = "abcd";

	ft_strnstr(str, str2, 9);
	return (0);
} */
