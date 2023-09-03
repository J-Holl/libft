/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 04:39:18 by jholl             #+#    #+#             */
/*   Updated: 2020/12/09 04:39:28 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_ptr;
	t_list *start_list;

	if (!f || !lst)
		return (NULL);
	start_list = NULL;
	if (!(new_ptr = ft_lstnew(f(lst->content))))
		return (start_list);
	start_list = new_ptr;
	lst = lst->next;
	while (lst)
	{
		if (!(new_ptr = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&start_list, del);
			return (start_list);
		}
		ft_lstadd_back(&start_list, new_ptr);
		lst = lst->next;
	}
	return (start_list);
}
