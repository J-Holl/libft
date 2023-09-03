/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 04:38:46 by jholl             #+#    #+#             */
/*   Updated: 2020/12/09 04:38:48 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *save_next;

	temp = *lst;
	if (!lst || !del)
		return ;
	while (temp)
	{
		save_next = temp->next;
		ft_lstdelone(temp, del);
		temp = save_next;
	}
	*lst = NULL;
}
