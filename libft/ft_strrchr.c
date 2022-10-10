/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:57:32 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/10 19:19:55 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	x;
	int	y;

	x = 0;
	y = c - 1;
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
	// }
	// x--;
	// while (x >= 0)
	// {
	// 	if (c == '\0')
	// 	{
	// 		return ((char *) &str[x]);
	// 	}
	// 	x++;
	// }
	
	return (NULL);
}

#include <stdio.h>

int	main()
{
	char *a = "Mar\0oua\0nue";
	int	x = '\0';

	printf("%s", ft_strrchr(a, x));
}