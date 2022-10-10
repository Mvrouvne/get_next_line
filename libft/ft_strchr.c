/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:12:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/10 19:18:30 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
#include <stdio.h>

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

int	main()
{
	char *a = "Marou\0anue";
	int	x = '\0';
	printf("%s\n", ft_strchr(a, x));
	printf("%s\n", strchr(a, x));
}