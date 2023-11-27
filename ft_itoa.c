/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:50:16 by tkerroum          #+#    #+#             */
/*   Updated: 2023/11/16 21:50:18 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ktebakhaydiali(char *p, long num, size_t len)

{
	if (num == 0)
	{
		p[0] = '0';
		p[1] = '\0';
		return (p);
	}
	p[len--] = '\0';
	if (num < 0)
	{
		p[0] = '-';
		num *= (-1);
	}
	while (num != 0)
	{
		p[len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (p);
}

static long	lenght(long num)
{
	long	len;

	len = 0;
	if (num < 0)
		len++;
	if (num == 0)
	{
		len++;
		return (len);
	}
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	long	len;
	char	*p;

	num = n;
	len = lenght(num);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	ktebakhaydiali(p, num, len);
	return (p);
}
