/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:57:15 by machaiba          #+#    #+#             */
/*   Updated: 2023/05/05 18:50:43 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	isdelimiter(char **av)
{
	int	x;
	int	y;

	if (av[0][1] == '<')
		return (1);
	return (0);
}
int	main(int ac, char **av, char **env)
{
	(void) env;
	(void) av;
	ac = 0;
	// int	x = 0;
	// int	y = 0;

	// char *str = readline("read: ");
	// printf("str = %s\n", str);
	isdelimiter(av);
}
