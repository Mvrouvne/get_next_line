/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:20:12 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/15 17:56:17 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	ldest;
	size_t	lsrc;

	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	x = 0;
	if (size == 0 || size <= ldest)
		return (lsrc + size);
	while (src[x] != '\0' && x < size - ldest - 1)
	{
		dest[ldest] = src[x];
		ldest++;
		x++;
	}
	dest[ldest] = '\0';
	return (ldest + lsrc);
}
