/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:54:10 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/30 00:00:27 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		y;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	join = malloc(sizeof(char) * (ft_strlen(s2) + ft_strlen(s1) + 1));
	if (!join)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x])
	{
		join[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		join[x] = s2[y];
		y++;
		x++;
	}
	join[x] = '\0';
	return (join);
}
