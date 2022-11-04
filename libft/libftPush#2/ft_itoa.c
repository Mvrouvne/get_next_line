/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:26:05 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/01 23:06:02 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int c)
{
	long int	x;

	x = 0;
	if (c <= 0)
	{
		c = c * -1;
		x++;
	}
	while (c > 0)
	{
		c = c / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int u)
{
	char		*str;
	long int	n;
	long int	x;
	int			sign;

	sign = 0;
	x = ft_count(u);
	n = u;
	str = (char *)malloc(sizeof(char) * x + 1);
	if (!str)
		return (0);
	if (n < 0)
	{
		sign = 1;
		n *= -1;
		str[0] = '-';
	}
	str[x--] = '\0';
	while ((sign && x > 0) || (!sign && x >= 0))
	{
		str[x--] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
