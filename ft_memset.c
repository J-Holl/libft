/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:14:15 by jholl             #+#    #+#             */
/*   Updated: 2020/12/07 19:14:23 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *cpy;

	if (n == 0)
		return (s);
	cpy = (unsigned char *)s;
	while (n--)
	{
		*cpy = (unsigned char)c;
		if (n)
			cpy++;
	}
	return (s);
}
