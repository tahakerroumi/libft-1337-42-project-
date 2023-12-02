/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:43:12 by tkerroum          #+#    #+#             */
/*   Updated: 2023/11/13 22:43:14 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {
// 	int fd = open ("text.txt",O_CREAT | O_RDWR , 0777);
// 	if (fd < 0)
// 	{
// 		printf("mochkila");
// 	}
// 	ft_putchar_fd('5',fd);
// }  