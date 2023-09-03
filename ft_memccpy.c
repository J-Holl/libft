/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:42:58 by jholl             #+#    #+#             */
/*   Updated: 2020/12/08 18:43:22 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *temp_dest;
	unsigned char *temp_src;

	if (n == 0)
		return (NULL);
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	while (n--)
	{
		*temp_dest = *temp_src;
		if (*temp_src == (unsigned char)c)
			return ((void *)temp_dest + 1);
		if (n)
		{
			temp_dest++;
			temp_src++;
		}
	}
	return (NULL);
}
