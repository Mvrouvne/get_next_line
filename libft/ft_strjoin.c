/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:54:10 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/18 12:57:17 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	x;
	size_t	y;

	x = ft_strlen(s1);
	y = 0;
	while (s1[x] != '\0' || s2[y] != '\0')
	{
		s1[x] = s2[y];
		x++;
		y++;
	}
	s1[x] = '\0';
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*join;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s1 || !s2)
		return (NULL);
	if (!join)
		return (NULL);
	join = ft_strcat(join, s1);
	join = ft_strcat(join, s2);
	return (join);
}

// int main()
// {
// 	char *a = "Hello ";
// 	char *b = "World!";

// 	printf("%s", ft_strjoin(a, b));
// }