/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 04:28:04 by jholl             #+#    #+#             */
/*   Updated: 2021/01/14 11:43:19 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set_char(char c_s1, char *set)
{
	while (*set)
	{
		if (*set == c_s1)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return ((char *)s1);
	while (s1[i] && is_set_char(s1[i], (char *)set))
		i++;
	while (s1[i + j])
	{
		while (s1[i + j] && !is_set_char(s1[i + j], (char *)set))
			j++;
		k = 0;
		while (s1[i + j] && is_set_char(s1[i + j], (char *)set))
		{
			j++;
			k++;
		}
	}
	j -= k;
	return (ft_substr((char *)s1, (unsigned int)i, j));
}
