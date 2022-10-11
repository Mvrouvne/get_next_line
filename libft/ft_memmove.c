/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:29:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/11 22:40:32 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	x;
	char	*cdest;
	char	*csrc;
	
	cdest = (char *)dest;
	csrc = (char *)src;
	//len = ft_strlen(src);
	x = 0;
	while (x < len)
	{
		cdest[x] = csrc[x];
		x++;
	}
	return (dest);
}

int main()
{
	char a[20];
	char b[] = "Marouane";

	printf("%s\n", memmove(a, 0, 3));
	printf("%s\n", b);
	// printf("%s\n", ft_memmove(a, 0, 3));
	// printf("%s\n", b);
}