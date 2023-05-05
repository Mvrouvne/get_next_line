/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:59:17 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/03 18:57:40 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **stack_b)
{
	t_list	*last;
	t_list	*seclast;

	if (!stack_b || !(*stack_b)->next)
        return ;
    last = *stack_b;
    while (last->next)
    {
        seclast = last;
        last = last->next;
    }
    seclast->next = NULL;
    last->next = *stack_b;
	*stack_b = last;
	write (1, "rrb\n", 4);
}

void	rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*seclast;

	if (!stack_a || !(*stack_a)->next)
        return ;
    last = *stack_a;
    while (last->next)
    {
        seclast = last;
        last = last->next;
    }
    seclast->next = NULL;
    last->next = *stack_a;
	*stack_a = last;
    write (1, "rra\n", 4);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write (1, "ra\n", 3);
	write (1, "rb\n", 3);
}

void	rb(t_list **stack_b)
{
	t_list	*head;
	t_list	*last;

    last = ft_lstlast(*stack_b);
	head = *stack_b;
	*stack_b = head->next;
    head->next = NULL;
    last->next = head;
	write (1, "rb\n", 3);
}

void	ra(t_list **stack_a)
{
	t_list	*head;
	t_list	*last;

    last = ft_lstlast(*stack_a);
	head = *stack_a;
	*stack_a = head->next;
    head->next = NULL;
    last->next = head;
	write (1, "ra\n", 3);
}

// int	main()
// {
// 	t_list	*head = NULL;

// 	ft_lstadd_back(&head, ft_lstnew(1));
// 	ft_lstadd_back(&head, ft_lstnew(2));
// 	ft_lstadd_back(&head, ft_lstnew(3));
// 	ft_lstadd_back(&head, ft_lstnew(4));

// 	ra(&head);
// 	while (head)
// 	{
// 		printf("%d\n", head->data);
// 		head = head->next;
// 	}
// }
