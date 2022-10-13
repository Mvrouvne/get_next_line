/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:27:53 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/14 00:33:19 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	x;
	size_t	y;
	char	*string;

	string = ((char *)str);
	if (to_find[0] == '\0')
		return (string);
	x = 0;
	while (x < len)
	{
		y = 0;
		while (to_find[y] == string[x + y])
		{
			if (to_find[y + 1] == '\0')
			{
				return (&string[x]);
			}
			y++;
		}
		x++;
	}
	return (0);
}
