/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:49:55 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 02:03:32 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*swap;
	t_list	*temp;

	temp = *lst;
	swap = temp;
	if (lst)
	{
		while (temp != NULL)
		{
			swap = swap->next;
			del(temp->content);
			free(temp);
			temp = swap;
		}
		*lst = NULL;
	}
}
