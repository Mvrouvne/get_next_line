/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_anything.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:11:14 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/09 01:15:32 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_anything(t_list **stack_a, t_list **stack_b)
{
	int	small;

	if (!stack_a || !*stack_a || !(*stack_a)->next || !stack_b)
		return ;
	if (sort_check(stack_a))
		exit (0);
	while (*stack_a)
	{
		small = smallest_node(stack_a);
		while (((*stack_a)->data != small))
		{
			if (small_index(stack_a) <= ft_lstsize(*stack_a) / 2)
				ra(stack_a);
			else
				rra(stack_a);
		}
		pb(stack_a, stack_b);
	}
	while (*stack_b)
		pa(stack_a, stack_b);
}