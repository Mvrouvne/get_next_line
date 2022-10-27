/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:36:29 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/22 22:08:51 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*subs;
	size_t			x;

	if (!str)
		return (NULL);
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	x = 0;
	if (start >= ft_strlen(str))
		return (subs);
	while (x < len)
	{
		subs[x] = str[start];
		x++;
		start++;
	}
	subs[x] = '\0';
	return (subs);
}
