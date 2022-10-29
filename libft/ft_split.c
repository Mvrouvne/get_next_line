/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:59:25 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/29 22:43:25 by machaiba         ###   ########.fr       */
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

void	ft_mar1(char **str, int nword)
{
	int	y;

	y = 0;
	while (y < nword)
	{
		free (str[y]);
		y++;
	}
	free (str);
}

void	ft_allocation(char **str, const char *s, int nword, char c)
{
	int	y;
	int	x;
	int	index;

	x = 0;
	y = 0;
	while (y < nword)
	{
		while (s[x] == c && s[x] != '\0')
			x++;
		index = x;
		while (s[x] != c && s[x] != '\0')
			x++;
		str[y++] = ft_substr(s, index, x - index);
	}
	if (!str)
		ft_mar1(str, nword);
	str[y] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		nword;

	if (!s)
		return (NULL);
	nword = wnumber(s, c);
	str = (char **)malloc(sizeof(char *) * (nword + 1));
	if (!str)
		return (NULL);
	ft_allocation(str, s, nword, c);
	return (str);
}

int main()
{
	char **p;
	char sep = ' ';
	int	x = 0;
	int y = 0;
	p = ft_split(" say  my name ", sep);
	while (p[x][y])
	{
		while (p[y])
		{
			printf("%s", p[y]);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}