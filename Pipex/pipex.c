/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:01:57 by machaiba          #+#    #+#             */
/*   Updated: 2023/01/06 00:03:28 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int ac, char **av, char **env)
{
	t_all	pi;
	

	pi.x = 0 ;
	pi.infile = open("infile", O_CREAT | O_RDWR);
	pi.outfile = open("outfile", O_CREAT | O_RDWR);
	if (ac == 5)
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
			//child 1
			close (pi.fd[0]);
			dup2(pi.infile, 0);
			dup2(pi.fd[1], 1);
			cmdcheck(av, env);
		}

		pi.id2 = fork();
		if (pi.id2 == -1)
		{
			perror("Fork Error 2");
			exit(1);
		}
		if (pi.id2 == 0)
		{
			close(pi.fd[1]);
			dup2(pi.fd[0], 0);
			dup2(pi.outfile, 1);
			cmdcheck2(av, env);
		}

		else
		{
			//parent process
			close(pi.fd[0]);
			close(pi.fd[1]);
			close(pi.infile);
			close(pi.outfile);
		}
	}
	else
			printf("Less than 5 parameters!!");
}