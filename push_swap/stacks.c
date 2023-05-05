/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:35:52 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/09 21:13:05 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	duplicate(char *splits, t_list **head)
{
	t_list	*temp;

	temp = *head;
	while (temp)
	{
		if (ft_atoi(splits) == temp->data)
		{
			write(2, "Error\nDuplicates!", 17);
			exit (1);
		}
		temp = temp->next;
	}
}
void	stacks(char **splits, t_list **head)
{
	int	x;

	x = 0;
	while (splits[x])
	{
		duplicate(splits[x], head);
		ft_lstadd_back(head, ft_lstnew(ft_atoi(splits[x])));
		x++;
		// free (splits[x]);
	}
}
