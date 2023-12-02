/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:58:56 by tkerroum          #+#    #+#             */
/*   Updated: 2023/12/02 03:02:24 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_if_error(char **ptr, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static int	count_strs(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str && str[i])
	{
		if (str[i] == c)
		{
			while (str[i] && str[i] == c)
				i++;
		}
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	get_strs_size(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str && str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**start_spliting(char **res, char const *s, char c)
{
	int		s_index;
	int		i;
	size_t	str_size;
	char	*str;

	i = 0;
	s_index = 0;
	while (s && s[i])
	{
		str_size = get_strs_size(s + i, c);
		if (!str_size)
			i++;
		else
		{
			str = malloc(str_size + 1);
			if (!str)
				return (free_if_error(res, s_index));
			ft_strlcpy(str, s + i, str_size + 1);
			res[s_index] = str;
			s_index++;
			i += str_size;
		}
	}
	res[s_index] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char **) * (count_strs(s, c) + 1));
	if (!res)
		return (NULL);
	return (start_spliting(res, s, c));
}
