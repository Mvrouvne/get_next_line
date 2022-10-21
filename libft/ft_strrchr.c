/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:57:32 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/21 00:18:21 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int x;

	x = ft_strlen(str);
	while (x >= 0)
	{
		if (str[x] == (char)c)
			return ((char *)&str[x]);
		x--;
	}
	return (0);
}
