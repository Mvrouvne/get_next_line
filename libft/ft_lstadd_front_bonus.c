/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:37:20 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/30 23:38:24 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

int main()
{
	// t_list *p = malloc(sizeof(t_list));
	// t_list *p1 = malloc(sizeof(t_list));
	 t_list *p2 = malloc(sizeof(t_list));
	t_list *head;
	
	head = NULL;
	// p->next = p1;
	// p1->next = NULL;
	// p2->next = NULL;

	// p->content = ft_strdup("marouan");
	// p1->content = ft_strdup("yassine");
	p2->content = ft_strdup("pp");

	ft_lstadd_front(&head, p2);
	printf("%s\n", head->content);
}