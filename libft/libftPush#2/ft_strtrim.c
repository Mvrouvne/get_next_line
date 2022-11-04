/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:30:17 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/31 18:40:26 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compaire(char c, const char *s)
{
	int	x;

	x = 0;
	while (s[x])
	{
		if (c == s[x])
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && compaire(s1[start], set))
		start++;
	while (end > start && compaire(s1[end], set))
		end--;
	if (end < 0)
		return (ft_strdup(""));
	trim = ft_substr(s1, start, (end - start) + 1);
	return (trim);
}
