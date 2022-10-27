/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:06:56 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/25 17:47:05 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	x;

	x = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[x] != '\0')
	{
		str[x] = (*f)(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}

// char	add(unsigned int a, char b)
// {
// 	(void) a;
// 	if (b >= 'a' && b <= 'z')
// 		b = b - 32;
// 	return (b);
// }

// int	main()
// {
// 	char (*f)(unsigned int, char);
// 	f = &add;
// 	printf("%s", ft_strmapi("Hello World!", f));
// }