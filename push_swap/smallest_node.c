/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:03:11 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/09 00:22:39 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	indexes(t_list **stack_a, int data)
{
	t_list *temp;
	int	index;
	
	index = 0;
	temp = *stack_a;
	while (temp)
	{
		if (temp->data == data)
			break ;
		index++;
		temp = temp->next;
	}
	return (index);
}

int	big_index(t_list **stack_a)
{
	t_list	*temp;
	int	big;
	int	index;

	index = 1;
	temp = *stack_a;
	big = biggest_node(stack_a);
	while (temp && temp->next)
	{
		if (big == temp->data)
			break ;
		temp = temp->next;
		index++;
	}
	return (index);
}
int	small_index(t_list **stack_a)
{
	t_list	*temp;
	int	small;
	int	index;

	index = 1;
	temp = *stack_a;
	small = smallest_node(stack_a);
	while (temp && temp->next)
	{
		if (small == temp->data)
			break ;
		temp = temp->next;
		index++;
	}
	return (index);
}

int	biggest_node(t_list **stack_a)
{
	t_list	*temp;
	int	big;

	temp = *stack_a;
	big = (*stack_a)->data;
	while (temp && temp->next)
	{
		if (big < temp->next->data)
			big = temp->next->data;
		temp = temp->next;
	}
	return (big);
}
int	smallest_node(t_list **stack_a)
{
	t_list	*temp;
	int	small;

	temp = *stack_a;
	small = (*stack_a)->data;
	while (temp && temp->next)
	{
		if (small > temp->next->data)
			small = temp->next->data;
		temp = temp->next;
	}
	return (small);
}