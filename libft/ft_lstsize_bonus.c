/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:47:22 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/30 23:53:46 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	if (lst == NULL)
		return (0);
	ptr = lst;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
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


	ft_lstsize(head);
	printf("%d\n", ft_lstsize(head));
}