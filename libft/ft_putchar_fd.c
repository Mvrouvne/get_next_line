/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:33:33 by machaiba          #+#    #+#             */
/*   Updated: 2022/10/29 22:18:44 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>

// int main()
// {
// 	int fd1 = open ("f1", O_CREAT | O_RDWR);
// 	int	fd2 = open ("f2", O_CREAT | O_RDWR);

// 	ft_putchar_fd('x', fd1);
// 	printf("f1 == %d", fd1);
// }