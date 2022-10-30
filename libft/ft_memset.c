/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:23:27 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/30 16:29:14 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	x;
	char	*cstr;

	cstr = ((char *)str);
	x = 0;
	while (x < len)
	{
		cstr[x] = c;
		x++;
	}
	return (str);
}

// int main()
// {
// 	int i[] = {  , 2, 3};
// 	int a = 0;
// 	ft_memset(i, 8, 2);
// 	while (a < 3)
// 	{
// 		printf("%d\n", i[a]);
// 		a++;
// 	}
// }