/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:28:15 by chtan             #+#    #+#             */
/*   Updated: 2024/05/31 20:57:34 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_cur;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(lst->content);
	if (!new)
		return (NULL);
	new_cur = new;
	while (lst->next)
	{
		new_cur = ft_lstnew(f(lst->next->content));
		if (!new_cur->next)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		new_cur = new_cur->next;
		lst = lst->next;
	}
	return (new);
}
