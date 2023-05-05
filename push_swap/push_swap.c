/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:09:16 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/10 00:38:56 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int ac, char **av)
{
	t_list *stack_a;
	t_list *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	checkarguments(ac, av, &stack_a);
	if (ft_lstsize(stack_a) == 3)
		sort_3(&stack_a);
	else if (ft_lstsize(stack_a) == 5)
		sort_5(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) == 100)
		sort_100(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) == 500)
		sort_500(&stack_a, &stack_b);
	else
		sort_anything(&stack_a, &stack_b);
	// while(stack_a)
	// {
	// 	printf("<<%d>>\n", stack_a->data);
	// 	stack_a = stack_a->next;
	// }
	// write(1, "\n", 1);
	// while(stack_b)
	// {
	// 	printf("^^%d^^\n", stack_b->data);
	// 	stack_b = stack_b->next;
	// }
	// while (1);
}