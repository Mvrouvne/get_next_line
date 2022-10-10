/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:39:09 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/10 15:22:13 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t 	y;

	x = 0;
	y = 0;
	x = ft_strlen(src);
	if (size > 0)
	{
		while (y <= size - 1 && src[y] != '\0')
		{
			dest[y] = src[y];
			y++;
		}
	}
	dest[y] = '\0';
	return (x);
}

int	main()
{
	char a[10] = "ABCD";
	char b[10] = "1234";

	printf("%zu\n", ft_strlcpy(a, b, 2));
	printf("%s\n", a);
	printf("%lu\n", strlcpy(a, b, 2));
	printf("%s\n", a);
}