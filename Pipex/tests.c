/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:27:40 by machaiba          #+#    #+#             */
/*   Updated: 2023/01/05 00:04:13 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	s_all	pi;

	if (ac == 2)
	{
		if (pipe(pi.fd) == -1)
		{
			perror("Pipe Error");
			exit(1);
		}
		pi.id = fork();
		if (pi.id == -1)
		{
			perror ("Fork Error");
			exit(1);
		}
		if (pi.id == 0)
		{
			//child process
			close (pi.fd[0]);
			write(pi.fd[1], av[1], strlen(av[1]));
			close (pi.fd[1]);
			cmdcheck()
		}
		else
		{
			//parent process
			close(pi.fd[1]);
			read(pi.fd[0], pi.buff, sizeof(pi.buff));
			close (pi.fd[0]);
		}
	}
}