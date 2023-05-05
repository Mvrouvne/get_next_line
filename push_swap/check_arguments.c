/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:25:43 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/09 21:24:46 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ftfree(char **splits)
{
	int	x;

	x = 0;
	while (splits[x])
	{
		free (splits[x]);
		x++;
	}
	free (splits);
}

void	check_range(char **splits)
{
	int	x;

	x = 0;
	while (splits[x])
	{
		if (ft_atoi(splits[x]) > INT_MAX || ft_atoi(splits[x]) < INT_MIN)
		{
			write(2, "Max/Min int exceeded!\n", 19);
			exit (1);
		}
		x++;
	}
}

void	check_splits(int ac, char **splits)
{
	int	x;
	int	y;
	(void)ac;
	
	x = 0;
	while (splits[x])
	{
		y = 0;
		if (splits[x][0] == '-' || splits[x][0] == '+')
		{
			if (splits[x][1] >= '0' && splits[x][1] <= '9')
				y++;
		}
		while (splits[x][y])
		{
			if (!(splits[x][y] >= '0' && splits[x][y] <= '9'))
			{
				write(2, "Digits Only!\n", 14);
				exit(1);
			}
			y++;
		}
		x++;
	}
	check_range(splits);
}

void    checkarguments(int ac, char **av, t_list **stack_a)
{
	int				x;
	char			**splits;

	x = 1;
	while (av[x])
	{
		splits = ft_split(av[x], ' ');
		check_splits(ac, splits);
		stacks(splits, stack_a);
		ftfree(splits);
		x++;
	}
}
