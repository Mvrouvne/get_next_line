/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:33:06 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/17 00:02:12 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	
	p =  malloc(size * count);
	if (p == '\0')
		return (0);
	bzero(p, size * count);
	return (p);
}

// int main()
// {
// 	printf("%s", ft_calloc(10, 10));
// 	//printf("%s", calloc(10, 10));
// }