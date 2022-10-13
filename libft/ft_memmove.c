/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:29:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/13 16:01:10 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	*cdest;
	char	*csrc;
	char 	*temp;

	y = ft_strlen(dest);
	z = ft_strlen(src);
	cdest = ((char *)dest);
	csrc = ((char *)src);
	x = 0;
	if (dest < src)
	{
		while ( x < size)
		{
			cdest[x] = csrc[x];
			x++;
		}
	}
	else
	{
		x = size - 1;
		while (x >= 0)
		{
			cdest[x] =csrc[x];
			x--;
		}
	}
	return (y + z);
}
int main()
{
	char a[15] = "Hi ";
	char b[15] = "Marouane";

	//printf("%s\n", memmove(a, 0, 3));
	//printf("%s\n", b);
	printf("%s\n", ft_memmove(a, 0, 3));
	printf("%s\n", b);
}