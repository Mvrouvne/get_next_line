/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:09:16 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/09 20:59:12 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_check(t_list **stack_a)
{
	t_list	*temp;
	
	temp = *stack_a;
	while (temp && temp->next)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int		small;

	if (!stack_a || !*stack_a || !(*stack_a)->next || !stack_b)
		return ;
	if (sort_check(stack_a))
		exit (0);
	small = smallest_node(stack_a);
	while (((*stack_a)->data != small))
	{
		if (small_index(stack_a) <= ft_lstsize(*stack_a) / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	small = smallest_node(stack_a);
	while (((*stack_a)->data != small))
	{
		if (small_index(stack_a) <= ft_lstsize(*stack_a) / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_3(t_list **stack_a)
{
	int	x; 
	int	y;
	int	z;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	if (sort_check(stack_a))
		return ;
	x = (*stack_a)->data;
	y = (*stack_a)->next->data;
	if (ft_lstsize(*stack_a) == 2)
	{
		sa(stack_a);
		return ;
	}
	z = (*stack_a)->next->next->data;
	if (x > y && z > y && z > x)
		sa(stack_a);
	else if (x > y && z < y && x > z)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (x > y && z > y && x > z)
		ra(stack_a);
	else if (x < y && x < z && y > z)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (x < y && z < y && y > x)
		rra(stack_a);
}
