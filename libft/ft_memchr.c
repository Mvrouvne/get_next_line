/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:52:46 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/28 23:38:26 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	x;
	char	*cstr;

	cstr = ((char *)str);
	x = 0;
	while (x < n)
	{
		if (cstr[x] == (char)c)
		{
			return (&cstr[x]);
		}
		x++;
	}
	return (NULL);
}

int main()
{
	printf("%s", ft_memchr("say my name", 'z', 10));
	//memchr("say my name", 'z', 10);
}
