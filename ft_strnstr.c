/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 03:50:42 by jholl             #+#    #+#             */
/*   Updated: 2020/12/09 03:59:24 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t k;

	i = 0;
	if (!ft_strlen(little))
		return ((char *)big);
	while (i < len && big[i])
	{
		k = 0;
		while (big[i + k] == little[k] && (i + k) < len)
		{
			k++;
			if (!little[k])
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
