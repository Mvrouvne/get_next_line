/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:53:57 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/10 00:19:45 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	int count;
	int index_big;
	int big;

    big = biggest_node(stack_b);
    index_big = big_index(stack_b);
    count = 0;
    while (*stack_b)
    {
        while ((*stack_b)->data != big)
        {
            rb(stack_b);
            count++;
        }
        if ((*stack_b)->data == big)
            pa(stack_a, stack_b);
        while (count <= 0)
        {
            rrb(stack_a, stack_a);
            count--;
        }
    }
}