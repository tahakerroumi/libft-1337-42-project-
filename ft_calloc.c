/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 01:12:36 by tkerroum          #+#    #+#             */
/*   Updated: 2023/11/14 01:12:39 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (p)
	{
		ft_bzero(p, nmemb * size);
	}
	return (p);
}
