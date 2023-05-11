/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:15:10 by plopes-c          #+#    #+#             */
/*   Updated: 2023/01/03 13:34:08 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_gnl_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i] && s[i] != '\n')
		i++;
	if (s)
		i += (s[i] == '\n');
	return (i);
}

int	ft_checkbuff(char *str, char **line)
{
	int		i;

	i = 0;
	if (!str[0])
		return (1);
	while (str[i] && str[i] != '\n')
		i++;
	*line = ft_gnl_strjoin(str, (*line));
	if (str[i] == '\n')
	{
		return (1);
	}
	return (0);
}

char	*ft_gnl_strjoin(char const *str, char *line)
{
	char	*newstr;
	int		i;
	int		n;

	i = 0;
	n = 0;
	newstr = malloc((ft_gnl_strlen(str)) + (ft_gnl_strlen(line)) + 1);
	if (str == NULL)
		return (NULL);
	while (line && line[i] != '\0')
	{
		newstr[i] = line[i];
		i++;
	}
	while (str && str[n] && (i == 0 || str[n - 1] != '\n'))
		newstr[i++] = str[n++];
	newstr[i] = '\0';
	if (line)
		free(line);
	return (newstr);
}

void	ft_cleanbuff(char *buffer)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	i += (buffer[i] == '\n');
	while (i < BUFFER_SIZE)
		buffer[n++] = buffer[i++];
	while (n < BUFFER_SIZE)
		buffer[n++] = 0;
}
