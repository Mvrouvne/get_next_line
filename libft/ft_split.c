/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:59:25 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/22 00:54:15 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	x;
	size_t	nword;
	size_t	nchar;
	char	*cs;

	x = 0;
	nword = 0;
	nchar = 0;
	cs = ((char *)s);
	while (s[x] != '\0')
	{
		if ((x == 0 && s[x] != c) || (s[x - 1] == c &&  s[x] != c)) 
		{
			nword++;
		}
		x++;
		
		//hna ghadi alloqui l kol word rassha 
	}
	printf("%zu\n", nword);
	printf("%zu\n", nchar);
}
	char *a = "my name   is Marouane";
	while(a[i])
	{
		while (a[i] != c)
			i++; // hna 3andk len dyal awal kalmma
			j = i;
		while (a[i] == c )
			i++; // katskippi separatoors
		//hna alloqui l kelma str = malloc 
	}
int main()
{

	printf("%d", ft_split(a, ' '));
}