/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:58:58 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/03 00:10:54 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	
	if (!stack_a)
		return ;
	temp = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	temp->next = (*stack_b);
	(*stack_b) = temp;
	write (1, "pb\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (!stack_a || !*stack_b)
		return ;
	temp = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	temp->next = (*stack_a);
	(*stack_a) = temp;
	write(1, "pa\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write (1, "ss\n", 3);
}

void	sb(t_list **stack_b)
{
	t_list	*temp;

	if (!stack_b || !*stack_b || (*stack_b)->next == NULL)
		return ;
	temp = (*stack_b)->next;
	(*stack_b)->next = temp->next;
	temp->next = *stack_b;
	*stack_b = temp;
	write (1, "sb\n", 3);
}

void	sa(t_list **stack_a)
{
	t_list	*temp;

	if (!stack_a || !*stack_a || (*stack_a)->next == NULL)
		return ;
	temp = (*stack_a)->next;
	(*stack_a)->next = temp->next;
	temp->next = *stack_a;
	*stack_a = temp;
	write (1, "sa\n", 3);
}
