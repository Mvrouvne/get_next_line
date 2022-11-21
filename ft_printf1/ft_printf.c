/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:07:17 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/10 22:30:52 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fun(const char *format, int x, va_list arg)
{
	int	count;

	count = 0;
	if (format[x] == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (format[x] == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (format[x] == 'p')
		count += write(1, "0x", 2)
			+ ft_tohexa(va_arg(arg, unsigned long), "0123456789abcdef");
	else if (format[x] == 'd' || format[x] == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (format[x] == 'u')
		count += ft_unputnbr(va_arg(arg, unsigned int));
	else if (format[x] == 'x')
		count += ft_tohexa(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (format[x] == 'X')
		count += ft_tohexa(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (format[x] == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		x;
	int		count;

	va_start(arg, format);
	x = 0;
	count = 0;
	while (format[x])
	{
		if (format[x] == '%')
		{
			x++;
			count += fun(format, x, arg);
		}
		else if (format[x] != '%')
			count += ft_putchar(format[x]);
		x++;
	}
	va_end(arg);
	return (count);
}
