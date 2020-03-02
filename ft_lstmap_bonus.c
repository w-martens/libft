/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/27 18:51:24 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/27 19:50:32 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list **ptr;

	if (!lst)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	ptr = &new;
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(ptr, del);
			return (NULL);
		}
		ft_lstadd_back(ptr, new);
		lst = lst->next;
	}
	return (*ptr);
}
