/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:30:43 by tkerroum          #+#    #+#             */
/*   Updated: 2023/11/16 15:31:01 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkchar(char a, char const *b)
{
	int	i;

	i = ft_strlen(b);
	while (i >= 0)
	{
		if (b[i] == a)
			return (1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return ((char *)s1);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && checkchar(s1[i], set))
		i++;
	while (j > 0 && checkchar(s1[j - 1], set))
		j--;
	if (i >= j)
	{
		return (ft_strdup(""));
	}
	str = ft_substr(s1, i, j - i);
	return (str);
}
