/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:23:27 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/09 16:22:41 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	x;

	x = 0;
	while (x < len && str[x])
	{
		str[x] 
		x++;
	}
}

int	main()
{
	char *a = "Marouane";
	int	x = '$';

	printf("%s", ft_memset(a, x, 3));
}