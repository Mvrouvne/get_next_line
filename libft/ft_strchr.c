/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:12:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/17 13:01:26 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return ("");
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
// int main()
// {
// 	char *a = "HelloWorld";

// 	//printf("%s", ft_strchr(a, '\0'));
// 	printf("%s", strchr(a, '\0'));
// }