/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:43:05 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/13 18:22:54 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (x < len)
	{
		y = x + 1;
		while (to_find[y] == str[x + y])
		{
			if (to_find[y + 1] == '\0')
			{
				return (&str[x]);
			}
			y++;
		}
		y = 0;
		x++;
	}
	return (0);
}
 #include <string.h>h>
int main()
{
	char a[] = "My name is Marouane";
	char b[] = "is";

	printf("%d", ft_srtnstr(a, b, 30));
	//printf("%s", srtnstr(a, b, 30));
}