/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:20:12 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/03 22:31:57 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	ldest;
	size_t	lsrc;
	size_t	a;

	if ((!dest || !src) && size == 0)
		return (ft_strlen(src));
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	a = ldest;
	x = 0;
	if (size <= ldest)
		return (lsrc + size);
	while (src[x] && ldest < (size - 1))
	{
		dest[ldest] = src[x];
		ldest++;
		x++;
	}
	dest[ldest] = '\0';
	return (lsrc + a);
}
