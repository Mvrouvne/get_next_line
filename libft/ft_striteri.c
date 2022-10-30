/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:51:27 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/30 19:50:35 by machaiba         ###   ########.fr       */
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
void fun(unsigned int i, char *s)
{
	printf("%c", s[i]);
}

int main()
{
	ft_striteri("hello", &fun);
}































// void	add(unsigned int a, char *b)
// {
// 	(void)a;
// 	if (*b >= 'a' && *b <= 'z')
// 		*b = *b - 32;
// }

// int	main()
// {
// 	void (*f)(unsigned int, char*);
// 	f = &add;
// 	char s[] = "hello World";
// 	ft_striteri(s, f);
// 	printf("%s\n", s);
// }