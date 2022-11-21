/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:14:43 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/10 15:42:26 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unputnbr(unsigned int x)
{
	int				count;

	count = 0;
	if (x < 0)
	{
		count += ft_putchar('-');
		x = x * -1;
	}
	if (x >= 0 && x <= 9)
		count += ft_putchar(x + '0');
	else if (x >= 10)
	{
		count += ft_putnbr(x / 10);
		count += ft_putnbr(x % 10);
	}
	return (count);
}
