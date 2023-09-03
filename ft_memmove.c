/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:49:35 by jholl             #+#    #+#             */
/*   Updated: 2020/12/08 18:49:42 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!n || src == dest)
		return (dest);
	else if (src > dest)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*((char *)dest + n) = *((char *)src + n);
	return (dest);
}
