/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:47:22 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/29 21:43:12 by machaiba         ###   ########.fr       */
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

// int main()
// {
// 	t_list *head = NULL;
// 	int i = 0;
// 	// head = ft_lstnew(ft_itoa(-1));
// 	while (i < 10)
// 	{
// 		ft_lstadd_front(&head, ft_lstnew(ft_itoa(i)));
// 		i++;
// 	}
// 	int size = ft_lstsize(head);
// 	printf("size %d", size);
// }