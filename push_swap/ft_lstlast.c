/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:46:24 by machaiba          #+#    #+#             */
/*   Updated: 2023/02/24 20:34:50 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (lst);
    while (lst)
    {
        if (lst->next == NULL)
            return (lst);
        lst = lst->next;
    }
    return (0);
}
