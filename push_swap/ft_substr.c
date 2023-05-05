/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:45:31 by machaiba          #+#    #+#             */
/*   Updated: 2023/02/10 16:45:55 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char *str, unsigned int start, size_t len)
{
	char			*subs;
	size_t			x;

	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	if (len + start > ft_strlen(str))
		len = ft_strlen(str) - start;
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	x = 0;
	while (x < len)
	{
		subs[x] = str[start];
		x++;
		start++;
	}
	subs[x] = '\0';
	return (subs);
}