/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:21:32 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/09 21:07:51 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *ft_lstnew(int content)
{
    t_list  *head;

    head = NULL;
    head = malloc(sizeof(t_list));
    head->data = content;
    head->next = NULL;
    return (head);
}
