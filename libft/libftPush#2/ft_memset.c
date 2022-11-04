/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:23:27 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/03 17:23:49 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			x;
	unsigned char	*cstr;

	cstr = ((unsigned char *)str);
	x = 0;
	while (x < len)
	{
		cstr[x] = (unsigned char)c;
		x++;
	}
	return (str);
}
