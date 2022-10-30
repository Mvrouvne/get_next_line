/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:29:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/30 22:33:18 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	x;

	x = 0;
	if (!src && !dest)
		return (NULL);
	if (src == dest)
		return (dest);
	if (dest > src)
	{
		while (len > 0)
		{
			((char *)dest)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		while (x < len)
		{
			((char *)dest)[x] = ((char *)src)[x];
			x++;
		}
	}
	return (dest);
}
int main()
{
	//int	dest[] = {7, 8, 9, 10, 11};
	// int	src[] = {1, 2, 3, 4, 5};
	char *s = ft_strdup("othmane");
	char *d = ("rrr");

	printf("%s", ft_memmove(d, s, 6));
	// int	x = 0;
	// while (x < 5)
	// 	printf("%d\n", src[x++]);
}

// int main()
// {
// 	char b[15] = "123abcd";
// 	//printf("%s\n", memmove(b + 1, b + 2, 2));
// 	//printf("%s\n", a);
// 	printf("%s\n", ft_memmove(b + 2, b + 1, 2));
// 	//printf("%s\n", a);
// }
// int main()
// {
// 	ft_memmove("abcd","abcd",4);
// }