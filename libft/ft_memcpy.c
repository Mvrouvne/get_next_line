/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:51:33 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/11 18:46:45 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;
	char	*csrc;
	char	*cdest;

	csrc = (char *)src;
	cdest = (char *)dest;
	x = 0;
	while (x < n)
	{
		cdest[x] = csrc[x];
		x++;
	}
	return (dest);
}

/*int main()
{
char csrc[] = "GeeksforGee ks jn 88 ih";
char cdest[100];
ft_memcpy(cdest, csrc, strlen(csrc)+1);
printf("Copied string is %s", cdest);
 
int isrc[] = {10, 0, 6, 40, 500};
int n = sizeof(isrc)/sizeof(isrc[0]);
int idest[n], i;
ft_memcpy(idest, isrc, sizeof(isrc));
printf("\nCopied array is ");
for (i=0; i<n; i++)
	printf("%d ", idest[i]);
return 0;
}*/