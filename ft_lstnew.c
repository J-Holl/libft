/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 04:35:49 by jholl             #+#    #+#             */
/*   Updated: 2020/12/09 04:35:51 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*new_ptr;

	if (!(new_ptr = (t_list *)malloc(sizeof(t_list) * 1)))
		return (NULL);
	new_ptr->content = content;
	new_ptr->next = NULL;
	return (new_ptr);
}
