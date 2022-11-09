/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 00:29:04 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/09 14:23:40 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_tohexa(size_t decimal, char *hex)
{
	size_t	count;

	count = 0;
	if (decimal >= 0 && decimal < 16)
		count += ft_putchar(hex[decimal]);
	else if (decimal >= 16)
	{
		count += ft_tohexa(decimal / 16, hex);
		count += ft_tohexa(decimal % 16, hex);
	}
	return (count);
}

// int main()
// {
// 	int x = ft_tohexa(-2147483647, "0123456789abcdef");
// 	write (1, "\n", 1);
// 	printf("%d", x);
// 	printf("%p", -2147483647);
// }