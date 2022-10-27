/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:59:25 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/27 00:30:50 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wnumber(const char *str, char c)
{
	int	x;
	int	nword;

	x = 0;
	nword = 0;
	while (str[x])
	{
		if ((str[x] != c && x == 0) || (str[x] != c && str[x - 1] == c))
		{
			x++;
			nword++;
		}
		if (str[x] != '\0')
			x++;
	}
	return (nword);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		nword;
	int		x;
	int		y;
	int		index;

	x = 0;
	y = 0;
	if (!s)
		return (NULL);
	nword = wnumber(s, c);
	str = (char **)malloc(sizeof(char *) * (nword + 1));
	if (!str)
		return (NULL);
	while (y < nword)
	{
		while (s[x] == c && s[x] != '\0')
			x++;
		index = x;
		while (s[x] != c && s[x] != '\0')
			x++;
		str[y++] = ft_substr(s, index, x - index);
	}
	str[y] = NULL;
	return (str);
	free (str);
}

// int	main()
// {
// 	char **str;
// 	char ss[] = "  he lo  wo ld  ";

// 	str = ft_split(ss, ' ');

// 	int i = 0;
// 	while (str[i])
// 		printf("%s\n", str[i++]);
// }