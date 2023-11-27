/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:04:01 by tkerroum          #+#    #+#             */
/*   Updated: 2023/11/13 15:04:04 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcl;
	size_t	destl;
	size_t	i;
	size_t	d;

	i = 0;
	destl = ft_strlen(dst);
	srcl = ft_strlen((char *)src);
	d = destl;
	if (!dst)
		return (srcl);
	if (size <= destl)
		return (size + srcl);
	while (d < size - 1 && src[i] != '\0')
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = '\0';
	return (destl + srcl);
}
