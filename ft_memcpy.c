/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:25:52 by jholl             #+#    #+#             */
/*   Updated: 2020/12/08 18:33:24 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *temp_dest;
	char *temp_src;

	if (!n || dest == src)
		return (dest);
	temp_dest = (char *)dest;
	temp_src = (char *)src;
	while (n--)
	{
		*temp_dest = *temp_src;
		if (n)
		{
			temp_dest++;
			temp_src++;
		}
	}
	return (dest);
}
