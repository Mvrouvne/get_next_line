/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:09:08 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/30 23:45:43 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
int main()
{
	t_list *p = malloc(sizeof(t_list));
	t_list *p1 = malloc(sizeof(t_list));
	t_list *p2 = malloc(sizeof(t_list));
	t_list *head;
	
	head = p;
	p->next = p1;
	p1->next = p2;
	p2->next = NULL;

	p->content = ft_strdup("marouan");
	p1->content = ft_strdup("yassine");

	ft_lstlast(head);
	printf("%s\n", head->content);
}