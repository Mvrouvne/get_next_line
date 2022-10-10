/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:27:47 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/08 14:28:49 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while ((x < n) && (s1[x] != '\0' || s2[x] != '\0'))
	{
		if (s1[x] > s2[x])
		{
			return (1);
		}
		else if (s1[x] < s2[x])
		{
			return (-1);
		}
		x++;
	}
	return (0);
}
