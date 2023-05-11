/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:35:43 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 20:31:10 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static	int	ft_words(char const *s, char c)
// {
// 	int	i;
// 	int	size;

// 	i = 0;
// 	while (*s)
// 	{
// 		while (*s && *s == c)
// 			s++;
// 		if (*s && *s != c)
// 			i++;
// 		size = 0;
// 		while (s[size] && s[size] != c)
// 			size++;
// 		while (*s && *s != c)
// 			s++;
// 	}
// 	return (i);
// }

// char	**new_split(char const *s, char c, int first, int last)
// {
// 	char	**str;
// 	int		i;
// 	int		y;

// 	i = 0;
// 	y = 0;
// 	str = ft_calloc((ft_words(s, c) + 1), sizeof(char *));
// 	if (!str)
// 	{
// 		free (str);
// 		return (NULL);
// 	}
// 	while (first <= last)
// 	{
// 		while (s[first + i] && s[first + i] != c)
// 			i++;
// 		str[y] = ft_substr(s, first, i);
// 		first = first + i;
// 		i = 0;
// 		while (s[first] == c && s[first] != '\0')
// 			first++;
// 		y++;
// 	}
// 	return (str);
// }

// char	**ft_split(char const	*s, char c)
// {
// 	int			first;
// 	int			last;
// 	char		**str;

// 	first = 0;
// 	if (!s)
// 		return (0);
// 	last = ft_strlen(s) - 1;
// 	while (s[first] && s[first] == c)
// 		first++;
// 	while (s[last] && s[last] == c)
// 		last--;
// 	str = new_split(s, c, first, last);
// 	return (str);
// }

// int	main(void)
// {
// 	char	**str;
// 	int i = 0;
// 	str = ft_split("  cc  cc   cc\0\0\0    cc   \0\0\0     \0", );
// 	while (str[i])
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// 	return (0);
// }

char	**ft_aux(char	**str, char const *s, char c, int count)
{
	int		size;
	int		i;
	char	*line;

	size = 0;
	i = 0;
	line = NULL;
	while (*s && *s == c)
			s++;
	while (s[size] && s[size] != c)
			size++;
	if (size)
		line = ft_calloc((size + 1), sizeof(char));
	while (line && *s && *s != c)
		line[i++] = *s++;
	if (line)
		str = ft_aux(str, s, c, count + 1);
	else
		str = ft_calloc((count + 1), sizeof(char *));
	if (str)
		str[count] = line;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	return (ft_aux(NULL, s, c, 0));
}
