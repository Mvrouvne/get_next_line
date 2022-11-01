/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:51:33 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/01 22:45:24 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;
	char	*csrc;
	char	*cdest;

	if (!dest && !src)
		return (0);
	if (dest == src)
		return (dest);
	csrc = (char *)src;
	cdest = (char *)dest;
	x = 0;
	while (x < n)
	{
		cdest[x] = csrc[x];
		x++;
	}
	return (dest);
}
