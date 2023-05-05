/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:45:48 by machaiba          #+#    #+#             */
/*   Updated: 2023/02/12 18:46:46 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		x;
	int		y;
	char	*join;

	if (!s1)
		return (ft_strdup(s2));
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
	// free (s1);
	return (join);
}