/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:51:27 by machaiba          #+#    #+#             */
/*   Updated: 2022/11/01 19:56:19 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{	
	size_t	x;

	if (!s || !f)
		return ;
	x = 0;
	while (x < ft_strlen(s))
	{
		(*f)(x, &s[x]);
		x++;
	}
}
