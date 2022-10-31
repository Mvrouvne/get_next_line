/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:12:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/31 18:50:19 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	x;
	size_t	len;

	x = 0;
	len = ft_strlen(str);
	while (x <= len)
	{
		if (str[x] == (char)c)
		{
			return ((char *) &str[x]);
		}
		x++;
	}
	return (0);
}
