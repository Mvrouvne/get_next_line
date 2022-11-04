/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:52:46 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/03 19:07:38 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			x;
	unsigned char	*cstr;

	cstr = ((unsigned char *)str);
	x = 0;
	while (x < n)
	{
		if (cstr[x] == (unsigned char)c)
		{
			return (&cstr[x]);
		}
		x++;
	}
	return (NULL);
}
