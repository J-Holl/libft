/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 04:34:46 by jholl             #+#    #+#             */
/*   Updated: 2020/12/09 04:35:30 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long n_long;

	n_long = (long)n;
	if (n_long < 0)
	{
		ft_putchar_fd('-', fd);
		n_long *= -1;
	}
	if (n_long < 10)
	{
		ft_putchar_fd((char)(n_long + '0'), fd);
	}
	else
	{
		ft_putnbr_fd((int)(n_long / 10), fd);
		ft_putchar_fd((char)((n_long % 10) + '0'), fd);
	}
}
