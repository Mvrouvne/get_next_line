/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:30:17 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/19 22:59:21 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t  x;
    size_t  y;
    
    cs1 = (char *)s1;
    cset = (char *)set;
    len = ft_strlen(cs1);
    trim = (char *)malloc(sizeof(char) * (len + 1));
    x = ft_strchr(s1, set[x])
    
}

int main()
{
    int start = strchr("HIHellowHi", set[len - 1 ]);
   while (start < end)
   {
    
   }
    char    *s1 = "HiHelloHi";
    char    *set = "Hi";
    
    printf("%s", ft_strtrim(s1, set));
}