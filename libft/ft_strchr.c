/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:12:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/13 00:44:14 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;
	if (c == '\0')
		return ("");
	while (str[x] != '\0')
	{
		if (str[x] == c)
		{
			return ((char *) &str[x]);
		}
		x++;
	}
	return (0);
}
