/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:29:12 by chaleirag14       #+#    #+#             */
/*   Updated: 2022/10/28 23:40:20 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long int	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (n > i)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (((char *)dest));
}
/*
int	main(void)
{
	//int		dest[100];
	int			src[] = {0, 1, 2, 3};
	char		dest[100];
	char		csrc[] = "abcdefg";

	ft_memcpy(dest, csrc, sizeof(src));
	//printf("%d\n", dest[0]);
	printf("%s\n", dest);
}
*/
/*
int	main(void)
{
	char	str[] = "abcdefg";
	char	str2[] = "123456";

	memmove (str + 2, str, 6);
	puts (str);
	ft_memcpy (str2 + 2, str2, 4);
	puts (str2);
}
*/