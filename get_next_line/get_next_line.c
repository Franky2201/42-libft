/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-win <gde-win@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:41:57 by gde-win           #+#    #+#             */
/*   Updated: 2023/10/10 12:43:54 by gde-win          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_update(char *buffer)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	j = 0;
	while (buffer[i])
	{
		i++;
		buffer[j] = buffer[i];
		j++;
	}
	while (buffer[j])
	{
		buffer[j] = '\0';
		j++;
	}
}

char	*get_next_line(int fd)
{
	static char	buffers[OPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	ssize_t		i;

	line = NULL;
	while (true)
	{
		if (ft_gnl_strlen(buffers[fd]) == 0)
		{
			i = read(fd, buffers[fd], BUFFER_SIZE);
			if (i == -1)
			{
				free(line);
				return (NULL);
			}
			else if (i == 0)
				return (line);
		}
		line = ft_gnl_strjoin(line, buffers[fd]);
		if (line == NULL)
			return (NULL);
		ft_update(buffers[fd]);
		if (line[ft_gnl_strlen(line) - 1] == '\n')
			return (line);
	}
}
/*
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	char *line;
	char *line1;
	int	fd;
	int	fd1;
	(void)ac;

	fd = open(av[1], O_RDONLY);
	fd1 = open(av[2], O_RDONLY);
	do
	{
		line = get_next_line(fd);
		line1 = get_next_line(fd1);
		printf("file 1: %s", line);
		printf("file 2: %s", line1);
		free(line);
		free(line1);
	} while (line || line1);
	close(fd);
	close(fd1);
	return (0);
}*/
