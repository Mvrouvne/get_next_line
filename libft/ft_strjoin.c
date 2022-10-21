/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:54:10 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/21 23:31:59 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	int		i;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	join = malloc(sizeof(char) * (ft_strlen(s2) + ft_strlen(s1) + 1));
	if (!join)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		join[i] = s2[j];
		j++;
		i++;
	}
	join[i] = '\0';
	return (join);
}
// int main()
// {
// 	char *a = "Hello ";
// 	char *b = "World!";

// 	printf("%s", ft_strjoin(a, b));
// }