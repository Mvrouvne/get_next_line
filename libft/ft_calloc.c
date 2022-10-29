/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:33:06 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/29 15:54:42 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	
	if (count && size > SIZE_MAX / count)
		return (0);
	p = malloc(size * count);
	if (!p)
		return (0);
	bzero(p, size * count);
	return (p);
}
