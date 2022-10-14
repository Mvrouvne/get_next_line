/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:29:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/14 17:43:24 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	x;
	char	*cdest;
	char	*csrc;

	cdest = ((char *)dest);
	csrc = ((char *)src);
	x = 0;
	if (dest > src)
	{
		while (len > 0)
		{
			cdest[size - 1] = csrc[size - 1];
			x--;
		}
	}
	else
	{
		while (x < size)
		{
			cdest[x] = csrc[x];
			x++;
		}
	}
	return (dest);
}
int main()
{
	char a[15] = "Hi ";
	char b[15] = "Marouane";

	printf("%s\n", memmove(a, b, sizeof(char) * 15));
	printf("%s\n", b);
	// printf("%s\n", ft_memmove(a, b, sizeof(char) * 15));
	// printf("%s\n", b);
}