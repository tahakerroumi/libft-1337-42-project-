/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 23:29:32 by tkerroum          #+#    #+#             */
/*   Updated: 2023/11/15 23:29:39 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	char	*t;
	size_t	len;

	len = ft_strlen((char *)s);
	p = (char *)malloc((sizeof(char) * (len + 1)));
	if (!p)
		return (NULL);
	t = p;
	while (*s)
	{
		*p++ = *s++;
	}
	*p = '\0';
	return (t);
}
