/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:48:41 by machaiba          #+#    #+#             */
/*   Updated: 2023/02/10 16:48:58 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(char *s1)
{
	char	*p;
	int		len;
	int		x;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	x = 0;
	while (s1[x] != '\0')
	{
		p[x] = s1[x];
		x++;
	}
	p[x] = '\0';
	return (p);
}