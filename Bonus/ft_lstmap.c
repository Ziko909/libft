/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:16:26 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 02:04:03 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nd;

	head = NULL;
	nd = NULL;
	while (lst)
	{
		nd = ft_lstnew(f(lst->content));
		if (!nd)
		{
			head = nd;
			ft_lstclear(&head, del);
			return (lst);
		}
		ft_lstadd_back(&head, nd);
		lst = lst->next;
	}
	return (head);
}
