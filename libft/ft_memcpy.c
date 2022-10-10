/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:51:33 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/10 13:38:26 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n && ((char *)src)[x] != '\0')
	{
		((char *)dest)[x] = ((char *)src)[x];
		x++;
	}
	return (dest);
}

int main()
{
	int a[5] = {};
	int b[5] = {1, 55, 76, 9, 10};

	printf("%s", ft_memcpy(a, b, 5));
	// char *a;
	// char *b = "Marouane";
	// printf("%s", ft_memcpy(a, b, 2));
	
	return (0);
}