/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 04:29:18 by jholl             #+#    #+#             */
/*   Updated: 2021/01/14 15:25:59 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**arr_free(char **ptr, size_t k)
{
	size_t i;

	i = 0;
	while (i < k)
	{
		if (ptr[i])
			free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static size_t	cnt_w(char *s, char c)
{
	size_t		count;
	size_t		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char		**arr_crt(char const *s, char c)
{
	char **ptr;

	if (!s)
		return (NULL);
	if (!(ptr = (char **)malloc((cnt_w((char *)s, c) + 1) * sizeof(char *))))
		return (NULL);
	return (ptr);
}

char			**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!(ptr = arr_crt(s, c)))
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (s[j])
			if (!(ptr[k] = ft_substr((char *)s, j, i - j)))
				return (arr_free(ptr, k));
		if (s[j])
			k++;
	}
	ptr[k] = NULL;
	return (ptr);
}
