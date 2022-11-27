/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:06:53 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/27 17:28:53 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	check(char *b)
{
	int	x;

	x = 0;
	while (b[x])
	{
		if (b[x] == '\n')
			return (1);
		x++;
	}
	return (0);
}

char	*get_read(int fd, char *reserve)
{
	char		*buff;
	int			x;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (0);
	buff[0] = '\0';
	while (!check(buff))
	{
		x = read(fd, buff, BUFFER_SIZE);
		if (x == -1)
			return (free (buff), free (reserve), NULL);
		buff[x] = '\0';
		if (!x)
		{
			free (buff);
			return (reserve);
		}
		reserve = ft_strjoin(reserve, buff);
	}
	free(buff);
	return (reserve);
}

char	*get_line1(char *line, char *reserve)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (reserve && reserve[x] && reserve[x] != '\n')
		x++;
	if (reserve && reserve[x] == '\n')
		x++;
	line = malloc(sizeof(char) * (x + 1));
	y = x;
	x = 0;
	while (x < y && reserve && reserve[x])
	{
		line[x] = reserve[x];
		x++;
	}
	line[x] = '\0';
	return (line);
}

char	*get_reserve(char *reserve)
{
	char	*reserve1;

	reserve1 = ft_strdup(ft_strchr(reserve, '\n'));
	free (reserve);
	return (reserve1);
}

char	*get_next_line(int fd)
{
	static char	*reserve;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	reserve = get_read(fd, reserve);
	line = get_line1(line, reserve);
	if (line[0] == '\0')
	{
		free (reserve);
		reserve = NULL;
		free (line);
		return (NULL);
	}
	reserve = get_reserve(reserve);
	return (line);
}

// #include <fcntl.h>
// #include <stdio.h>

// int	main()
// {
// 	int	fd1 = open("file.txt", O_RDWR);
// 	int	fd2 = open("file1.txt", O_RDWR);
// 	// int	fd1 = open("file1.txt", O_RDWR);
// 	printf("[%s]", get_next_line(fd1));
// 	// printf("[%s]", get_next_line(fd1));
// 	// printf("[%s]", get_next_line(fd1));
// 	// system ("leaks a.out");
// 	// while (1);
// 	printf("{%s}", get_next_line(fd2));
// 	printf("[%s]", get_next_line(fd1));
// 	printf("[%s]", get_next_line(fd2));
// 	printf("[%s]", get_next_line(fd1));
// 	// printf("\n------\n");
// 	printf("{%s}", get_next_line(fd2));
// 	printf("{%s}", get_next_line(fd2));
// 	// printf("{%s}", get_next_line(fd2));
// 	// printf("%s", get_next_line(fd1));
// 	// printf("%s", get_next_line(fd2));
// }