/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:20:12 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/12 16:32:28 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	z;

	x = ft_strlen(dest);
	z = ft_strlen(src);
	y = 0;
	if (size > 0)
	{
		while (y < size - x - 1 && src[y] != '\0')
		{
			dest[x] = src[y];
			x++;
			y++;
		}
		dest[x] = '\0';
	}
	return (x + z);
}

int	main()
{
	char a[15] = "Hi ";
	char b[15] = "Marouane";

	printf("%zu\n", ft_strlcat(a, b, 2));
	printf("%s\n", a);
	//printf("%lu\n", strlcat(a, b, 2));
	//printf("%s\n", a);
}
