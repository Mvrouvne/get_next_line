/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:09:30 by machaiba          #+#    #+#             */
/*   Updated: 2023/02/27 15:59:15 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrr(t_list **stack_a, t_list **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
    write (1, "rra\n", 4);
    write (1, "rrb\n", 4);
}
