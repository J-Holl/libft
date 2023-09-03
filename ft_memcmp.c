/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 22:19:52 by jholl             #+#    #+#             */
/*   Updated: 2020/12/08 22:19:58 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_c;
	unsigned char *s2_c;

	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	if (!n)
		return (0);
	while (n--)
	{
		if (*s1_c != *s2_c)
			return (*s1_c - *s2_c);
		if (n)
		{
			s1_c++;
			s2_c++;
		}
	}
	return (*s1_c - *s2_c);
}
