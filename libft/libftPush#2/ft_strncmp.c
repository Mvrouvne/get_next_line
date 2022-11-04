/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:27:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/02 00:21:46 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			x;
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	x = 0;
	while ((x < n) && (cs1[x] != '\0' || cs2[x] != '\0'))
	{
		if (cs1[x] > cs2[x])
		{
			return (1);
		}
		else if (cs1[x] < cs2[x])
		{
			return (-1);
		}
		x++;
	}
	return (0);
}
