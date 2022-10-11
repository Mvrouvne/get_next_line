/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:57:32 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/11 00:13:54 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	x;
	int	y;

	x = 0;
	y = c - 1;
	if (c == '\0')
		return ("");
	while (str[x] != '\0')
	{
		x++;
	}
	x--;
	while (str[x] != '\0')
	{
		if (str[x] == c)
		{
			return ((char *) &str[x]);
		}
		x--;
	}
	return (0);
}
