/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:11:15 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/02 19:27:44 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	int					a;
	int					b;
	unsigned long 	c;

	a = 0;
	b = 1;
	c = 0;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == ' ')
		a++;
	if (str[a] == '-')
	{
		b = b * -1;
		a++;
	}
	else if (str[a] == '+')
		a++;
	while (str[a] >= '0' && str[a] <= '9')
		c = (c * 10) + (str[a++] - '0');
	// if (c > __LONG_MAX__ && b == 1)
	// 	return (-1);
	// else if (c > __LONG_MAX__ && b == -1)
	// 	return (0);
	return (c * b);
}
	