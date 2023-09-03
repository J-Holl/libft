/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 22:51:09 by jholl             #+#    #+#             */
/*   Updated: 2021/01/14 11:47:08 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		save;

	i = 0;
	save = -1;
	while (s[i])
	{
		if (s[i] == c)
			save = i;
		i++;
	}
	if (s[i] == c)
		save = i;
	if (save != -1)
		return ((char *)s + save);
	return (NULL);
}
