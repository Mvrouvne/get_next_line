/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:49:08 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/25 22:54:45 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	x;

	if (!s)
		return ;
	x = 0;
	while (s[x] != '\0')
	{
		write(fd, &s[x], 1);
		x++;
	}
	write(fd, "\n", 1);
}

// #include <fcntl.h>
// int main()
// {
//     int fd1 = open ("t1", O_RDWR);
//     int fd2 = open ("t2", O_RDWR);;
//     int fd3 = open ("t3", O_RDWR);;
//     ft_putendl_fd("Hello World!", fd2);
//     printf("1 ==%d, 2 == %d  , 3 == %d\n", fd1, fd2, fd3);
// }