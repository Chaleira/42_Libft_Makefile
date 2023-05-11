/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:20:50 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/25 15:24:54 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;

	if (read(fd, 0, 0) < 0 || fd >= FOPEN_MAX)
	{
		i = 0;
		if (fd > -1 && fd < FOPEN_MAX)
			while (i < BUFFER_SIZE)
				buffer[fd][i++] = 0;
		return (NULL);
	}
	line = NULL;
	if (!buffer[fd][0])
		buffer[fd][read(fd, buffer[fd], BUFFER_SIZE)] = 0;
	while (!ft_checkbuff(buffer[fd], &line))
		buffer[fd][read(fd, buffer[fd], BUFFER_SIZE)] = 0;
	ft_cleanbuff(buffer[fd]);
	return (line);
}
/*
int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	while (i < 4)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
		i++;
	}
	close(fd);
	return (0);
}
*/