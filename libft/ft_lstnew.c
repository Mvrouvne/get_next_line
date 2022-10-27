/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:02:18 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/24 00:39:00 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *head;

	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	head->content = content;
	head->next = NULL;
	return head;
}

int main()
{
	int *content = 22;
	printf("%ld\n", ft_lstnew(content)->content);
}