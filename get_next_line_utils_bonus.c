/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:03:02 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/27 17:43:53 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	x;

	x = 0;
	if (!str)
		return (0);
	while (str[x] != '\0')
		x++;
	return (x);
}

char	*ft_strchr(char *str, int c)
{
	size_t	x;
	size_t	len;

	x = 0;
	len = ft_strlen(str);
	while (x <= len)
	{
		if (str[x] == (char)c)
			return ((char *) &str[++x]);
		x++;
	}
	return (0);
}

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
	free (s1);
	return (join);
}

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
