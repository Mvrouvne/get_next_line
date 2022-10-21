/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:29:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/21 00:26:50 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	x;
	char	*cdest;
	char	*csrc;

	cdest = ((char *)dest);
	csrc = ((char *)src);
	x = 0;
	if (!src && !dest)
		return (NULL);
	if (dest > src)
	{
		while (len > 0)
		{
			cdest[len - 1] = csrc[len - 1];
			len--;
		}
	}
	else
	{
		while (x < len)
		{
			cdest[x] = csrc[x];
			x++;
		}
	}
	return (dest);
}
// int main()
// {
	
// 	char b[15] = "123abcd";

// 	//printf("%s\n", memmove(b + 1, b + 2, 2));
// 	//printf("%s\n", a);
// 	printf("%s\n", ft_memmove(b + 2, b + 1, 2));
// 	//printf("%s\n", a);
// }