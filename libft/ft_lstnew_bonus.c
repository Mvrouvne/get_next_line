/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:18:46 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/30 16:30:05 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = content;
	head->next = NULL;
	return (head);
}
 
// int	main()
// {
// 	// int	*a = 22;
// 	t_list	*k =ft_lstnew(ft_strdup("20"));
// 	// free (k -> content);
// 	// free (k);
// 	printf("%s", k -> content);
// }