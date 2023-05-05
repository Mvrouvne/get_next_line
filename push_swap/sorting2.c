/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:00:13 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/10 01:20:14 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_int_tab(int *tab, t_list *stack_a)
{
	int	x;
	int	y;
	int	size;
	int	temp;

	x = 0;
	size = ft_lstsize(stack_a);
	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if (tab[x] > tab[y])
			{
				temp = tab[x];
				tab[x] = tab[y];
				tab[y] = temp;
			}
			y++;
		}
		x++;
	}
	return (tab);
}

void	push_b(t_list **stack_a, t_list **stack_b, int *tab_use)
{
	int	size;
	int	count;

	size = 0;
	count = 0;
	while (*stack_a)
	{
		if (count == size)
			size += 20;
		if (size == 100)
		{
			while (*stack_a)
				pb(stack_a, stack_b);
			break;
		}
		if ((*stack_a)->data < tab_use[size])
		{
			pb(stack_a, stack_b);
			count++;
		}
		else
			ra(stack_a);
	}
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	int	big;

	while (*stack_b)
	{
		big = biggest_node(stack_b);
		while (((*stack_b)->data != big))
		{
			if (big_index(stack_b) <= ft_lstsize(*stack_b) / 2)
				rb(stack_b);
			else
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
	}
}

void	sort_100(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	int	*tab;
	int	*tab_use;
	int	x;

	if (!stack_a || !*stack_a || !(*stack_a)->next || !stack_b)
		return ;
	if (sort_check(stack_a))
		exit (0);
	tab = malloc(sizeof(int) * ft_lstsize(*stack_a));
	temp = *stack_a;
	x = 0;
	while (temp)
	{
		tab[x] = temp->data;
		x++;
		temp = temp->next;
	}
	tab_use = sort_int_tab(tab, *stack_a);
	push_b(stack_a, stack_b, tab_use);
	push_a(stack_a, stack_b);
	free (tab);
}
